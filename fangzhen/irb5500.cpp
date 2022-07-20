#include "irb5500.h"

IRB5500::IRB5500() {
	//DH参数
	//MDH [θ d a α]
	double dh_v[7][4] = { { 0, 340, 0, 0 },{ -pi / 2, 0, 0, -pi / 2 },{ 0, 0, 1300, 0 },{ -pi / 2, 1507.5, 0, -pi / 2 },
	{ 0,79.35, 0, 35 * pi / 180 },{ 0, 79.35, 0, -70 * pi / 180 },{ -pi / 2,82.501, 0, 35 * pi / 180 } };
	
	for (int i = 0; i < 7; i++) {
		vector<double> dh_i;
		for (int j = 0; j < 4; j++)
			dh_i.push_back(dh_v[i][j]);
		this->dh.push_back(dh_i);
	}
	
	//关节限位
	double joint_lim_v[6][2] = { { -100,100 },{ -30,140 },{ -75,255 },{ -450,450 },{ -360,360 },{ -450,450 } };
	for (int i = 0; i < 6; ++i)
		for (int j = 0; j < 2; ++j)
			joint_lim[i][j] = joint_lim_v[i][j]*pi/180;
	//关节速度限制
	double joint_v_lim_v[6] = { 70.76337004, 62.44863302, 86.84500152, 218.52151492, 53.57735566, 318.63145528 };
	//关节加速度限制
	double joint_a_lim_v[6] = { 536.10351934, 512.16932401, 653.3473183, 3297.1018813, 400.50877485, 2478.01871841 };
	for (int i = 0; i < 6; i++) {
		joint_v_lim[i] = joint_v_lim_v[i];
		joint_a_lim[i] = joint_a_lim_v[i];
	}

	MatrixXd offset_v(4, 4);
	offset_v.setIdentity();
	offset_distance = -212.5; //偏移距离
	offset_v(2, 3) = offset_distance; 
	offset = offset_v; //偏移距离矩阵
	robot_type = "ABB";
}


vector<double> IRB5500::cal_t5(MatrixXd Td, double theta1, double theta2, double theta3) {
	double beta = 35 * pi / 180;
	double ax = Td(0, 2);
	double ay = Td(1, 2);
	double az = Td(2, 2);
	double A = 2 * pow(sin(beta), 4);
	double B = 4 * sin(beta)*sin(beta) - 4 * pow(sin(beta), 4);
	double C = ax*sin(theta2 + theta3)*cos(theta1) + ay*sin(theta2 + theta3)*sin(theta1) + az*cos(theta2 + theta3) + 2 * pow(sin(beta), 4) - 4 * sin(beta)*sin(beta) + 1;
	double delta = B*B - 4 * A*C;
	vector<double> res;
	if (delta >= 0) {
		double D1 = (-B + sqrt(delta)) / (2 * A);
		double D2 = (-B - sqrt(delta)) / (2 * A);
		if (-1 <= D1 && D1 <= 1) {
			res.push_back(atan2(sqrt(1 - D1*D1), D1));
			res.push_back(atan2(-sqrt(1 - D1*D1), D1));
		}
		if (-1 <= D2 && D2 <= 1) {
			res.push_back(atan2(sqrt(1 - D2*D2), D2));
			res.push_back(atan2(-sqrt(1 - D2*D2), D2));
		}
	}
	return res;
}

vector<double> IRB5500::cal_t4(MatrixXd Td, double theta1, double theta2, double theta3, double theta5) {
	double beta = 35 * pi / 180;
	double ax = Td(0, 2);
	double ay = Td(1, 2);
	double az = Td(2, 2);
	double cb2 = cos(beta)*cos(beta);
	double a = -2 * cos(beta)*sin(beta)*(cos(theta5) - 1)*(cos(theta5) + cb2 - cb2*cos(theta5));
	double b = -2 * sin(beta)*sin(theta5)*(cos(theta5) + cb2 - cb2*cos(theta5));
	double c = ay*cos(theta1) - ax*sin(theta1);
	double d = ax*cos(theta1)*cos(theta2 + theta3) + ay*sin(theta1)*cos(theta2 + theta3) - az*sin(theta2 + theta3);
	double t4 = atan2(a*d - b*c, a*c + b*d);
	vector<double> res;
	res.push_back(t4);
	res.push_back(t4 - 2 * pi);
	if(t4<=0)
		res.push_back(t4 + 2 * pi);
	return res;
}

vector<double> IRB5500::cal_t6(MatrixXd Td, double theta1, double theta2, double theta3, double theta5) {
	double beta = 35 * pi / 180;
	double nx = Td(0, 0);
	double ny = Td(1, 0);
	double nz = Td(2, 0);
	double ox = Td(0, 1);
	double oy = Td(1, 1);
	double oz = Td(2, 1);

	double cb2 = cos(beta)*cos(beta);
	double a = -2 * cos(beta)*sin(beta)*(cos(theta5) - 1)*(cos(theta5) + cb2 - cb2*cos(theta5));
	double b = 2 * sin(beta)*sin(theta5)*(cos(theta5) + cb2 - cb2*cos(theta5));
	double c = -ox*cos(theta1)*sin(theta2 + theta3) - oy*sin(theta1)*sin(theta2 + theta3) - oz*cos(theta2 + theta3);
	double d = -nx*cos(theta1)*sin(theta2 + theta3) - ny*sin(theta1)*sin(theta2 + theta3) - nz*cos(theta2 + theta3);
	double t6 = atan2(a*d - b*c, a*c + b*d);
	vector<double> res;
	res.push_back(t6);
	res.push_back(t6 - 2 * pi);
	if(t6<=0)
		res.push_back(t6 + 2 * pi);
	return res;
}

//控制器角度值转为程序中的角度值
void IRB5500::c_to_p(double* thetas) {
	thetas[1] = thetas[1] - pi / 2;
	thetas[3] = thetas[3] - pi / 2;
	thetas[5] = thetas[5] - pi / 2;
}

//程序中的角度值转为控制器中的角度值
void IRB5500::p_to_c(double* thetas) {
	thetas[1] = thetas[1] + pi / 2;
	thetas[3] = thetas[3] + pi / 2;
	thetas[5] = thetas[5] + pi / 2;
}

//程序角度值转为控制器角度值(角度单位的)
void IRB5500::p_to_c_deg(double* thetas) {
	thetas[1] = thetas[1] + 90;
	thetas[3] = thetas[3] + 90;
	thetas[5] = thetas[5] + 90;
}