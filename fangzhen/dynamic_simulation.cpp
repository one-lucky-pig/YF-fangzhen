
#include "dynamic_simulation.h"

using Eigen::MatrixXd;
using namespace std;

// ����ĩ���ٶȺ��ⲿ���˶�����������֮����˶�ʱ��

vector<double> cal_dt(vector<MatrixXd> &data,Station &station) {
	double t, v_exter,vm;
	vector<double> t_data;
	MatrixXd vec;
	double L;
	if (station.type == "ABB")
		t = station.start_distance / station.convery_move_v.norm() + station.transition_time;
	else
		t = station.transition_time;
	t_data.push_back(t);
	for (int i = 1; i < data.size(); i++) {
		vec = data[i].block(0, 3, 3, 1) - data[i - 1].block(0, 3, 3, 1);
		L = vec.norm();
		v_exter = (-station.convery_move_v.transpose()*vec)(0, 0)/L;
		vm = station.tool_speed + v_exter;
		t = L / vm;
		t_data.push_back(t);
	}
	return t_data;
}

//���ǹؽ��ٶ����ƣ���������֮�������ʱ��
vector<double> cal_dt_J(vector<double> &t,vector<double*> &joint_data, Robot *robot) {
	vector<double> tj;
	tj.push_back(t[0]);
	double t1,dj;
	for (int i = 1; i < joint_data.size(); i++) {
		t1 = 0;
		for (int j = 0; j < 6; j++) {
			dj = abs(joint_data[i][j] - joint_data[i - 1][j]);
			t1 = max(t1, dj / robot->joint_v_lim[j]);
		}
		t1 = max(t1, t[i]);
		tj.push_back(t1);
	}
	return tj;
}

//�˶�����
//ini_thetasΪ�����ʽ
//dataΪ��������ϵ�µľ�����ʽ
void simulation(vector<MatrixXd> &data, Robot *robot, double* ini_thetas, double R, Station &station, vector<double> &v,vector<double> &t) {
	vector<MatrixXd> data_p=interpolation_r(data,R);// ��ת��뾶��ֵ
	data_p = sampling_d(data_p, 100);// ����
	vector<double> t_data = cal_dt(data_p, station);//��ĩ���ٶȹ��������˶�ʱ��
	vector<MatrixXd> data_r = convert_data(data_p, t_data, station);	//ת������ϵ��6��ĩ�˵�����������ϵ��
	vector<double*> joint_data = robot->path(data_r, ini_thetas); //�����
	robot->convert_to_deg(joint_data);

	t_data = cal_dt_J(t_data,joint_data,robot);//���ǹؽ��ٶ����ƣ���������֮�������ʱ��
	data_r = convert_data(data_p, t_data, station);	//ת������ϵ��6��ĩ�˵�����������ϵ��
	joint_data = robot->path(data_r, ini_thetas); //�����
	robot->convert_to_deg(joint_data);

	t=cal_t(data_p,joint_data, station.tool_speed,robot); // �����˶�ʱ�䣨���ģ�*�ɿ��ǵ����ٶ�
	v=cal_v(data_p,t);	//�����ٶ� *�ɿ��ǵ����ٶ�

	//���Ǽ���ó����˶�ʱ�䣬�ٴ�ת������
	t.insert(v.begin(), t_data[0]);
	t_data = t;
	data_r = convert_data(data_p, t_data, station);	//ת������ϵ��6��ĩ�˵�����������ϵ��
	joint_data = robot->path(data_r, ini_thetas); //�����
	robot->convert_to_deg(joint_data);

	t = cal_t(data_p, joint_data, station.tool_speed, robot); // �����˶�ʱ�䣨���ģ�*�ɿ��ǵ����ٶ�
	v = cal_v(data_p, t);	//�����ٶ� *�ɿ��ǵ����ٶ�

}



