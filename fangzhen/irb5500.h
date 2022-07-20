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

	//控制器角度值转为程序中的角度值
	virtual void c_to_p(double* thetas);
	//程序中的角度值转为控制器中的角度值
	virtual void p_to_c(double* thetas);
	virtual void p_to_c_deg(double* thetas);

};



