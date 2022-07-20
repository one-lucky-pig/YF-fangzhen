#pragma once
#include <Eigen/Dense>   
#include <vector>
#include <iostream>
#include "math.h"
#include "robot.h"
#define pi 3.14159265358979323846

using Eigen::MatrixXd;
using namespace std;

class IRB5500 : public Robot {
public:
	IRB5500();
	
	virtual vector<double> cal_t5(MatrixXd Td, double theta1, double theta2, double theta3);

	virtual vector<double> cal_t4(MatrixXd Td, double theta1, double theta2, double theta3, double theta5);

	virtual vector<double> cal_t6(MatrixXd Td, double theta1, double theta2, double theta3, double theta5);

	//�������Ƕ�ֵתΪ�����еĽǶ�ֵ
	virtual void c_to_p(double* thetas);
	//�����еĽǶ�ֵתΪ�������еĽǶ�ֵ
	virtual void p_to_c(double* thetas);
	virtual void p_to_c_deg(double* thetas);

};



