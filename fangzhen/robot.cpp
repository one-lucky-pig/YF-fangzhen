#include "robot.h"
#include <exception>
#include <iostream>
#include <fstream>
#define pi 3.14159265358979323846


//MDH��ģ�������������˱任����
MatrixXd Robot::T(int i) {
	double theta = this->dh[i][0];
	double d = this->dh[i][1];
	double a = this->dh[i][2];
	double alpha = this->dh[i][3];
	MatrixXd m(4, 4);
	
	m(0, 0) = cos(theta);
	m(0, 1) = -sin(theta);
	m(0, 2) = 0;
	m(0, 3) = a;
	m(1, 0) = sin(theta)*cos(alpha);
	m(1, 1) = cos(theta) * cos(alpha);
	m(1, 2) = -sin(alpha);
	m(1, 3) = -sin(alpha) * d;
	m(2, 0) = sin(theta) * sin(alpha);
	m(2, 1) = cos(theta) * sin(alpha);
	m(2, 2) = cos(alpha);
	m(2, 3) = cos(alpha) * d;
	m(3, 0) = 0;
	m(3, 1) = 0;
	m(3, 2) = 0;
	m(3, 3) = 1;
	return m;
}

//��������
MatrixXd Robot::FK(double* thetas) {
	MatrixXd Td(4, 4);
	
	Td.setIdentity();
	if (this->dh.size() == 7) {
		for (int i = 0; i < 5; i++)
			this->dh[i][0] = thetas[i];		
		this->dh[5][0] = -thetas[4];		
		this->dh[6][0] = thetas[5];	
		
		for (int i = 0; i < 7; i++)
			Td *= T(i);		
	}
	else {
		for (int i = 0; i < 6; i++)
			this->dh[i][0] = thetas[i];
		for (int i = 0; i <6; i++)
			Td *= T(i);
	}

	return Td;
}

//���Ƕ�ֵת��Ϊ[-pi,pi]֮��
double Robot::normal_range(double theta) {
	if (theta >= -pi & theta <= pi) return theta;
	if (theta < -pi) {
		while (1) {
			theta += 2 * pi;
			if (theta >= -pi & theta <= pi) return theta;
		}
	}
	else {
		while (1) {
			theta -= 2 * pi;
			if (theta >= -pi & theta <= pi) return theta;
		}
	}
}

vector<double> Robot::cal_t1(MatrixXd Td) {
	double px = Td(0, 3);
	double py = Td(1, 3);
	double t1 = atan2(py, px);
	double t11 = atan2(-py, -px);
	vector<double> res;
	res.push_back(t1);
	res.push_back(t11);
	/*res.push_back(t1 - pi);
	res.push_back(t11 - pi);*/
	return res;
}

vector<double> Robot::cal_t2(MatrixXd Td, double theta1) {
	double px = Td(0, 3);
	double py = Td(1, 3);
	double pz = Td(2, 3);
	double a1 = dh[1][2];
	double d1 = dh[0][1];
	double T1 = px / cos(theta1) - a1;
	double T3 = pz - d1;
	double d4 = dh[3][1];
	double a2 = dh[2][2];
	double a3 = dh[3][2];
	double M = (d4 *d4 + a3 *a3 - T1 *T1 - T3 *T3 - a2* a2) / (2 * a2);
	double d = T1 *T1 + T3 *T3 - M *M;

	vector<double> res;
	if (d >= 0) {
		double t2 = atan2(T3, -T1) - atan2(sqrt(d), M);
		double t21 = atan2(T3, -T1) + atan2(sqrt(d), M);
		res.push_back(normal_range(t2));
		res.push_back(normal_range(t21));
		/*res.push_back(t2 - 2 * pi);
		res.push_back(t21 - 2 * pi);*/
	}

	return res;
}
vector<double> Robot::cal_t3(MatrixXd Td, double theta1, double theta2) {
	double px = Td(0, 3);
	double py = Td(1, 3);
	double pz = Td(2, 3);
	double a1 = dh[1][2];
	double d1 = dh[0][1];
	double d4 = dh[3][1];
	double a2 = dh[2][2];
	double a3 = dh[3][2];
	double T1 = px / cos(theta1) - a1;
	double T3 = pz - d1;
	double A = T1 - a2 *cos(theta2);
	double B = -T3 - a2 * sin(theta2);
	vector<double> res;
	double t3 = atan2(a3 * B - d4 * A, a3 * A + d4 * B) - theta2;
	res.push_back(normal_range(t3));
	return res;
}

//�򻯻��������
vector<double*> Robot::IK(MatrixXd Td) {
	vector<double*> solutions;
	vector<double> t1s = cal_t1(Td);
	for (int i1 = 0; i1 < t1s.size(); i1++) {
		double theta1 = t1s[i1];
		vector<double> t2s = cal_t2(Td, theta1);
		for (int i2 = 0; i2 < t2s.size(); i2++) {
			double theta2 = t2s[i2];
			vector<double> t3s = cal_t3(Td, theta1, theta2);
			for (int i3 = 0; i3 < t3s.size(); i3++) {
				double theta3 = t3s[i3];
				vector<double> t5s = cal_t5(Td, theta1, theta2, theta3);
				for (int i4 = 0; i4 < t5s.size(); i4++) {
					double theta5 = t5s[i4];
					vector<double> t4s = cal_t4(Td, theta1, theta2, theta3, theta5);
					for (int i5 = 0; i5 < t4s.size(); i5++) {
						double theta4 = t4s[i5];
						vector<double> t6s = cal_t6(Td, theta1, theta2, theta3, theta5);
						for (int i6 = 0; i6 < t6s.size(); i6++) {
							double theta6 = t6s[i6];
							double *solution = new double[6];
							solution[0] = theta1;
							solution[1] = theta2;
							solution[2] = theta3;
							solution[3] = theta4;
							solution[4] = theta5;
							solution[5] = theta6;
							solutions.push_back(solution);
						}
					}
				}
			}
		}
	}
	return solutions;
}

//����ĩ��λ��������
MatrixXd Robot::cal_perr(MatrixXd Td, MatrixXd Ta) {
	MatrixXd m = Td.block(0, 3, 3, 1) - Ta.block(0, 3, 3, 1);
	return m;
}

// ����������ѡ�����Ž⣨��thetas��ӽ�������⣩
double* Robot::choice_best_solution(vector<double*> &solutions, double* thetas) {
	double min_error = pow(10, 10), error;
	double* best_solution = NULL;
	double* solution;
	int index = 0;		//���Ž���solutions�е�����
	for (int i = 0; i < solutions.size(); i++) {
		error = 0;
		solution = solutions[i];
		for (int j = 0; j < 6; j++) {
			error += pow(solution[j] - thetas[j], 2);
		}
		if (error < min_error) {
			best_solution = solution;
			min_error = error;
			index = i;
		}
	}
	//�ͷ�������ѡ����ڴ�
	for (int i = 0; i < solutions.size(); i++) {
		if (i == index) continue;
		delete solutions[i];
	}
	//�ͷ����ֵ������ڴ�
	return best_solution;
}

//ѡ�����ų�ʼ��
double* Robot::select_solution(vector<double*> &solutions, double* last_thetas) {
	double min_error = pow(10, 10), error;
	double* best_solution = NULL;
	double* solution;
	double factor[6] = { 1, 1, 1, 1, 2, 1 }; //�����������
	int index = 0;		//���Ž���solutions�е�����
	p_to_c(last_thetas);	//ת��
	// ���ݽǶȱ仯��Сԭ��ѡȡ���Ž�
	for (int i = 0; i < solutions.size(); i++) {
		error = 0;
		solution = solutions[i];
		p_to_c(solution);		//ת��
		for (int j = 0; j < 6; j++) {
			error += factor[j]*abs(solution[j] - last_thetas[j]);
		}
		
		if (error < min_error) {
			best_solution = solution;
			min_error = error;
			index = i;
		}
		c_to_p(solution);
	}
	//c_to_p(best_solution);
	c_to_p(last_thetas);		//ת������
	
	//�ͷ�������ѡ����ڴ�
	for (int i = 0; i < solutions.size(); i++) {
		if (i == index) continue;
		delete solutions[i];
	}
	return best_solution;
}

//ĩ�˲���������
//threshold��ĩ��λ�����ȣ���λ:mm
double* Robot::end_method_iter(MatrixXd Td, double *last_thetas, double threshold,int no) {
	double error;		            //λ�����ֵ
	MatrixXd Ta;				//ʵ��ĩ��λ��
	MatrixXd e;					//ĩ��λ��������
	MatrixXd offset_i(4, 4);		//ĩ���������󣨱��ε�����
	MatrixXd offset1(4, 4);			//ĩ�����������ۻ���
	unordered_set<double> set;
	double* orip;
	vector<double*> solutions;
	offset_i.setIdentity();
	offset1.setIdentity();

	solutions = IK(Td*offset); //�����ĩ��λ��
	
	//double euler[6];
	//��ʼ�޽�
	if (solutions.size() == 0) {
		double* s = new double[6];
		s[0] = 200;
		return s;
	}

	//������Ϣ
	//ofstream of;
	
	//of.open("E:\\Desktop\\UG����\\poses.txt", ios::app);
	//of << Td << endl;
	//of.close();

	//of.open("E:\\Desktop\\UG����\\run_info.txt", ios::app);
	//of << no + 1 << endl;
	//T_to_euler(Td, euler);
	//for (int i = 0; i < 6; i++)
	//	of << euler[i] << " ";
	//of << endl << endl;

	//for (int i = 0; i < solutions.size(); ++i) {
	//	for (int j = 0; j < 6; ++j)
	//		of << solutions[i][j] * 180 / pi << " ";
	//	of << endl;
	//}
	//

	double *thetas = select_solution(solutions, last_thetas);
	
	//������Ϣ
	//of << "ini thetas: ";
	//for (int j = 0; j < 6; ++j)
	//	of << thetas[j] * 180 / pi << " ";
	//of << endl;//

	Ta = this->FK(thetas);
	e = this->cal_perr(Td, Ta);
	error = e.norm();
	int count = 0;
	
	while (error > threshold) {
		offset_i(0, 3) = e(0, 0);
		offset_i(1, 3) = e(1, 0);
		offset_i(2, 3) = e(2, 0);
		offset1 = offset_i*offset1;

		//����ѭ��
		if (count>300 || set.find(error) != set.end()) {
			//thetas[0] = 400;
			return thetas;
		}

		else set.insert(error);

		solutions = this->IK(offset1*(Td*offset));
		if (solutions.size() == 0) return NULL;
		delete thetas;
		thetas = choice_best_solution(solutions, last_thetas);
		Ta = this->FK(thetas);
		e = this->cal_perr(Td, Ta);
		error = e.norm();

		++count;
	}

	//������Ϣ
	//of << "final thetas: ";
	//for (int j = 0; j < 6; ++j)
	//	of << thetas[j] * 180 / pi << " ";
	//of << endl;

	//p_to_c(thetas);
	//of << "              ";
	//for (int j = 0; j < 6; ++j)
	//	of << thetas[j] * 180 / pi << " ";
	//of << endl;
	//c_to_p(thetas);

	//of <<"----------------------------"<<endl<< endl;
	//of.close();

	return thetas;
}

//���ĳһ���׼ȷ���
double* Robot::inv_solution(MatrixXd Td, double* last_thetas,int no) {
	vector<double*> solutions;
	double* best_solution;
	double* final_solution = NULL;
	
	final_solution = end_method_iter(Td, last_thetas, 0.01,no);
	//�м��޽�
	if (final_solution == 0) return final_solution;

	//��ʼ�޽� ����
	/*if (final_solution[0] == 200) {
		delete final_solution;
		reverse_offset();
		final_solution = end_method_iter(Td, last_thetas, 0.01);
		reset_offset();		
	}*/

	//��ʼ�޽⣨200��,�м��޽� (400)
	if (final_solution[0] == 200 || final_solution[0]==400) {
		delete final_solution;
		final_solution = NULL;
	}

	return final_solution;
}

//����Ż�
void Robot::solution_optimize(vector<double*> &solutions) {
	for (int i = 0; i < solutions.size(); ++i) {
		p_to_c(solutions[i]);
		// 1. ��4��6�����ֵ����360����6��+-360
		if (abs(solutions[i][3] + solutions[i][5]) > 2 * pi) {
			if (solutions[i][5] > 0) solutions[i][5] -= 2 * pi;
			else solutions[i][5] += 2 * pi;
		}
		
		// 2. ��4��6֮�;���ֵ����360����4��+-360
		/*if (abs(solutions[i][3] + solutions[i][5]) > 2 * pi) {
			if (solutions[i][3] > 0) solutions[i][3] -= 2 * pi;
			else solutions[i][3] += 2 * pi;
		}*/

		/*if (abs(solutions[i][3] + solutions[i][5]) > 2 * pi) {
			if (solutions[i][3] + solutions[i][5] > 2 * pi) {
				if (abs(solutions[i][3]) < abs(solutions[i][5]))
					solutions[i][3] -= 2 * pi;
				else solutions[i][5] -= 2 * pi;
			}
			else {
				if (abs(solutions[i][3]) < abs(solutions[i][5]))
					solutions[i][5] += 2 * pi;
				else solutions[i][3] += 2 * pi;
			}
		}*/

		c_to_p(solutions[i]);
	}
}

//����Ż�
void Robot::solution_optimize_1(double* solution) {
	// 1. ��4��6�����ֵ����360����6��+-360
	if (abs(solution[3] + solution[5]) > 2*pi) {
		if (solution[5] > 0) solution[5] -= 2*pi;
		else solution[5] += 2*pi;
	}
	if (abs(solution[3] + solution[5]) > 2 * pi) {
		if (solution[5] > 0) solution[5] -= 2 * pi;
		else solution[5] += 2 * pi;
	}
	
}

//�������һ�ι켣���й켣������
//�Գ���Ƕ�ֵ��ʽ����
//soft=false ���ʧ����������
//���� ����һ�������Ϊ�õ����
vector<double*> Robot::path(vector<MatrixXd> &points_data, double* ini_thetas,bool soft) {
	MatrixXd Td;
	vector<double*> res;
	double* last_thetas = ini_thetas;
	double* s;
	for (int i = 0; i < points_data.size(); ++i) {
		Td = points_data[i];
		s = inv_solution(Td, last_thetas,i);
		/*try {
			s = inv_solution(Td, last_thetas);
		}
		catch (exception e) {
			if (soft)			
				s = last_thetas;			
			else
				return res;
		}*/
		if (s == 0) {
			if (soft) {
				s = new double[6];
				for (int j = 0; j < 6; ++j)
					s[j] = last_thetas[j];
			}
			else break;
		}
		p_to_c(s);
		solution_optimize_1(s);
		c_to_p(s);
		res.push_back(s);

		last_thetas = s;
	}
	//solution_optimize(res);
	return res;
}

//�������һ�ι켣���й켣������
//����������������Լ���λ�㣨�洢��vector< vector<int> > &result��
vector<double*> Robot::path(vector<MatrixXd> &points_data, double* ini_thetas, vector< vector<int> > &result) {
	MatrixXd Td;
	vector<double*> res;
	double* last_thetas = ini_thetas;
	double* s;
	result.clear();
	vector<int> no;
	for (int i = 0; i < points_data.size(); ++i) {
		Td = points_data[i];
		s = inv_solution(Td, last_thetas, i); //�����
		// �����
		if (s == 0) {
			//����һ�������Ϊ�õ����
			s = new double[6];
			for (int j = 0; j < 6; ++j)
				s[j] = last_thetas[j];	
		    //-1��Ϊ��־
			no = { -1 };
		}
		//�����
		else {
			p_to_c(s); //ת�����������Ƕ�
			solution_optimize_1(s); //�Ż�
			no = is_limit(s); //�ж���Щ�Ƕ���λ
			c_to_p(s);//ת��������Ƕ�
		}
		result.push_back(no);//���õ�������λ�������result
		res.push_back(s);//�����������res
		last_thetas = s;//��һ�����ָ��s����Ϊ��һ�������ο�
	}
	
	//solution_optimize(res);
	return res;
}


//���ȹؽڽ�תΪ�Ƕȹؽڽ�
void Robot::convert_to_deg(vector<double*> &thetas) {
	for (int i = 0; i < thetas.size(); i++) {
		for (int j = 0; j < 6; j++) {
			thetas[i][j] = thetas[i][j] * 180 / pi;
		}
	}
}

//���ȹؽڽ�תΪ�Ƕȹؽڽ�
void Robot::convert_to_deg(double* thetas) {
	for (int j = 0; j < 6; ++j) {
		thetas[j] = thetas[j] * 180 / pi;
	}
}

//���ĳ������Ƿ�ﵽ��λ
vector<int> Robot::is_limit(double* theta) {
	vector<int> res;
	for (int i = 0; i < 6; ++i) {
		if (i == 3 || i == 5) continue; //4��6�᲻�ж�
		// �ж�������Ƕ��Ƿ�����λ��Χ��
		if (!(theta[i] >= joint_lim[i][0] && theta[i] <= joint_lim[i][1]))
			res.push_back(i+1);
	}

	//4 6��Ƕ�֮�ͳ���360
	if (abs(theta[3] + theta[5]) > 2*pi) {
		res.push_back(4);
		res.push_back(6);
	}
	//�����ж�4��6��
	else {
		if (!(theta[3] >= joint_lim[3][0] && theta[3] <= joint_lim[3][1]))
			res.push_back(4);
		if (!(theta[5] >= joint_lim[5][0] && theta[5] <= joint_lim[5][1]))
			res.push_back(6);
	}

	return res;
}

//���ؽ���λ
vector< vector<int> > Robot::check_limit(vector<double*> thetas) {
	int n = thetas.size();
	vector< vector<int> > res;
	vector<int> no;
	for (int i = 0; i < n; ++i) {
		no = is_limit(thetas[i]);		
		res.push_back(no);
	}
	return res;
}


//��תƫ�Ʒ���
void Robot::reverse_offset() {
	this->offset(2, 3) = -this->offset(2, 3);
}

//����ƫ�Ʒ���
void Robot::reset_offset() {
	this->offset(2, 3) = offset_distance;
}

Robot::~Robot() {};