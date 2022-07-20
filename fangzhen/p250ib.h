#pragma once
#include "robot.h"
#define pi 3.14159265358979323846

class P250IB :public Robot {
public:
	P250IB();
	virtual vector<double> cal_t1(MatrixXd Td);
	virtual vector<double> cal_t3(MatrixXd Td, double theta1);
	virtual vector<double> cal_t2(MatrixXd Td, double theta1, double theta3);
	virtual vector<double> cal_t5(MatrixXd Td, double theta1, double theta2, double theta3);

	virtual vector<double> cal_t6(MatrixXd Td, double theta1, double theta2, double theta3, double theta5);

	virtual vector<double> cal_t4(MatrixXd Td, double theta1, double theta2, double theta3, double theta5);
	vector<double*> IK(MatrixXd Td);
	//������ο�robot_guide����վ��
	//�������Ƕ�ֵתΪ�����еĽǶ�ֵ
	virtual void c_to_p(double* thetas);
	//�����еĽǶ�ֵתΪ�������еĽǶ�ֵ
	virtual void p_to_c(double* thetas);
	virtual void p_to_c_deg(double* thetas);
private:
	double beta;
};

