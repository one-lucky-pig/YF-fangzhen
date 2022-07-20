// ����һЩ�켣��Ԥ����ĺ���

#include "process_data.h"
#include <fstream>

#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))

// ��(��������ϵ��)����ת����6��ĩ�˵�����������ϵ��ʽ
// convery_move_v ��3X1�ľ���
vector<MatrixXd> convert_data(vector<MatrixXd> &data, vector<double> &tdata,Station &station) {
	vector<MatrixXd> new_data;
	if (station.type == "ABB") {
		MatrixXd T0r = inv_T(station.Tr0);//�����Ի����� 
		MatrixXd Twt = station.Tw0;//��������ڴ��
		for (int i = 0; i < data.size(); i++) {
			Twt.block(0, 3, 3, 1) = Twt.block(0, 3, 3, 1) + tdata[i] * station.convery_move_v;
			MatrixXd new_d = T0r*Twt*data[i] * inv_T(station.Tte);
			new_data.push_back(new_d);
		}
	}
	else {
		MatrixXd Twr(4, 4);
		Twr.setIdentity();
		if(station.convery_move_v(1,0)>0)
			Twr(0, 3) = -station.start_distance;
		else
			Twr(0, 3) = station.start_distance;
		for (int i = 0; i < data.size(); i++) {
			Twr.block(0, 3, 3, 1) = Twr.block(0, 3, 3, 1) + tdata[i] * station.convery_move_v;
			MatrixXd new_d = Twr*data[i] * inv_T(station.Tte);
			new_data.push_back(new_d);
		}
	}
	return new_data;
}

//(�켣��)��ת��뾶��ֵ
vector<MatrixXd> interpolation_r(vector<MatrixXd> &data, double R, double accuracy) {
	int N;
	double L,q1[4],q2[4],dot_q,s,fa,sina;
	double *q; 	//q��ת�������Ԫ�ؽ����ǰ4������ʾ��̬����3������ʾλ��
	MatrixXd r1, r2,r;
	vector < vector < double* > > line_data;

	//������ת��뾶�����
	for (unsigned i = 0; i < data.size()-1; i++) {
		vector<double*> t_data;
		r1 = data[i].block(0, 3, 3, 1);	//��i����λ��
		r2 = data[i + 1].block(0, 3, 3, 1); //��i+1����λ��
		L = (r1 - r2).norm();	//�������
		
		t_to_q(data[i],q1);
		t_to_q(data[i + 1], q2);
		N = int(L / accuracy) + 1; //�������
		dot_q = 0;
		for (int j = 0; j < 4; j++)
			dot_q += q1[j] * q2[j];
		for (int j = 0; j < N + 1; j++) {
			q = new double[7]; 
			s = j / double(N);
			r = (1 - s)*r1 + s*r2; //���Բ�ֵ����̬��λ�ã�

			//��̬��ֵ
			//��ֹ��Զ·
			if (dot_q < 0) {
				q2[0] = -q2[0];
				q2[1] = -q2[1];
				q2[2] = -q2[2];
				q2[3] = -q2[3];
				dot_q = -dot_q;
			}
			//���������̬�ܽӽ�
			if (dot_q > 0.9995) {
				for (int k = 0; k < 4; k++)
					q[k] = (1 - s) * q1[k] + s * q2[k];
			}
			//����
			else {
				sina = sqrt(1.0 - dot_q*dot_q);
				fa = atan2(sina,dot_q);
				//fa = acos(dot_q);
				
				for (int k = 0; k < 4; k++)
					q[k] = sin((1 - s) * fa) * q1[k] /sin(fa) + sin(s * fa) * q2[k] / sin(fa);
			}

			//λ�ò�ֵ
			for (int k = 4; k < 7; k++)
				q[k] = r(k - 4, 0);	
			
			t_data.push_back(q);			
		}
		line_data.push_back(t_data);
	}

	vector< vector<unsigned long> > intersect_index; //ת�䲿����ֱ�߽���λ��(2��)
	vector < vector < double* > > zone_data;  //ת�䲿��
	unsigned long n1, n2;
	unsigned long index1,index2;
	double L1, L2,R1max,tR1,s1,s2,alpha;
	
	for (unsigned i = 0; i < line_data.size(); i++) {
		vector<unsigned long> tv;
		intersect_index.push_back(tv);
	}
	
	for (unsigned i = 0; i < line_data.size() - 1; i++) {
		vector<double*> one_zone_data;
		n1 = line_data[i].size();
		n2 = line_data[i+1].size();
		L1 = cal_d(line_data[i][0], line_data[i][n1 - 1]);	//��i��ֱ�߳���
		L2 = cal_d(line_data[i+1][0], line_data[i+1][n2 - 1]); //��i+1��ֱ�߳���
		R1max = min(L1 / 2, L2 / 2);
		tR1 = min(R, R1max);	//ȷ����ʵת��뾶
		s1 = 1 - tR1 / L1;
		s2 = tR1 / L2;
		index1 = unsigned long(n1*s1);	//��ڽ���index
		index2 = unsigned long(n2*s2);  //���ڽ���index
		if (i == 0) intersect_index[i].push_back(0);
		intersect_index[i].push_back(index1);
		intersect_index[i + 1].push_back(index2);
		if ((n1 - index1) != index2) index1 = n1 - index2; //��֤����ת�䲿�ֵ�����һ��
		//ת�䲿�ֲ�ֵ
		for (unsigned long j = 0; j < index2; j++) {
			q = new double[7];
			s = (j + 1) / double(index2);
			alpha = 3 *s*s - 2 * s*s*s;	//��ֵ����ʽ
			double *q1 = line_data[i][index1 + j];
			double *q2 = line_data[i + 1][j];
			dot_q = 0;
			for (int k = 0; k < 4; k++) dot_q += q1[k] * q2[k];

			//��̬��ֵ
			if (dot_q < 0) {
				q2[0] = -q2[0];
				q2[1] = -q2[1];
				q2[2] = -q2[2];
				q2[3] = -q2[3];
				dot_q = -dot_q;
			}
			//������̬�ӽ�
			if (abs(dot_q) > 0.9995) {
				for (int k = 0; k < 4; k++)
					q[k] = (1 - alpha) * q1[k] + alpha * q2[k];
			}
			else {
				sina = sqrt(1.0 - dot_q*dot_q);
				fa = atan2(sina, dot_q);
				//fa = acos(dot_q);
				for (int k = 0; k < 4; k++)
					q[k] = sin((1 - alpha) * fa) * q1[k] / sin(fa) + sin(alpha * fa) * q2[k] / sin(fa);
			}
			//λ�ò�ֵ
			for (int k = 4; k < 7; k++)
				q[k] = q1[k] + alpha * (q2[k] - q1[k]);			
			one_zone_data.push_back(q);
		}
		zone_data.push_back(one_zone_data);
	}
	intersect_index[intersect_index.size() - 1].push_back(line_data[line_data.size() - 1].size());

	//��ת�䲿����ֱ�߲������ϵ�һ��
	vector<MatrixXd> interpolation_data;
	for (unsigned i = 0; i < zone_data.size(); i++) {
		/*if (i == 0) {
			for (unsigned long j = intersect_index[i][0]; j < intersect_index[i][1]; j++)
				interpolation_data.push_back(q_to_t(line_data[i][j]));
		}
		else {
			for (unsigned long j = intersect_index[i][0]+1; j < intersect_index[i][1]; j++)
				interpolation_data.push_back(q_to_t(line_data[i][j]));
		}*/
		for (unsigned long j = intersect_index[i][0]; j < intersect_index[i][1]; j++)
			interpolation_data.push_back(q_to_t(line_data[i][j]));
		for (unsigned long j = 0; j < zone_data[i].size(); j++)
			interpolation_data.push_back(q_to_t(zone_data[i][j]));		
	}
	
	for(unsigned long j= intersect_index[intersect_index.size()-1][0];j<intersect_index[intersect_index.size()-1][1];j++)
		interpolation_data.push_back(q_to_t(line_data[line_data.size()-1][j]));
	return interpolation_data;
}


//�ȼ������
vector<MatrixXd> sampling_d(vector<MatrixXd> &data, double d) {
	vector<MatrixXd> result;
	result.push_back(data[0]);
	unsigned long start_index = 0;
	double dd;
	for (unsigned long i = 0; i < data.size(); i++) {
		dd = (data[i].block(0, 3, 3, 1) - data[start_index].block(0, 3, 3, 1)).norm();
		if (dd >= d) {
			result.push_back(data[i]);
			start_index = i;
		}
		
	}
	result.push_back(data[data.size() - 1]);
	return result;
}
