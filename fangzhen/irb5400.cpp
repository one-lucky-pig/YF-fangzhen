#include "irb5400.h"

IRB5400::IRB5400() {
	//5400_22 DH参数
	double dh_v[7][4] = { { 0,660, 0, 0 },{ -pi / 2, 0, 300, -pi / 2 },{ 0, 0, 1200, 0 },{ -pi / 2, 1407.5, 213, -pi / 2 },
	{ 0, 79.35, 0, 35 * pi / 180 },{ 0, 79.35, 0, -70 * pi / 180 },{ -pi / 2, 82.501, 0, 35 * pi / 180 } };
	//5400_12 DH参数
	//简化结构DH
	/*double dh_v[7][4] = { { 0, 660, 0, 0 },{ -pi / 2, 0, 300, -pi / 2 },{ 0, 0, 1200, 0 },{ -pi / 2, 1407.5, 186, -pi / 2 },
	{ 0,0, 0, 35 * pi / 180 },{ 0, 0, 0, -70 * pi / 180 },{ -pi / 2,0, 0, 35 * pi / 180 } };*/
	this->dh.clear();
	for (int i = 0; i < 7; i++) {
		vector<double> dh_i;
		for (int j = 0; j < 4; j++)
			dh_i.push_back(dh_v[i][j]);
		this->dh.push_back(dh_i);
	}

	//关节限位
	double joint_lim_v[6][2] = { { -100,100 },{ -40,140 },{ -75,255 },{ -450,450 },{ -360,360 },{ -450,450 } };
	for (int i = 0; i < 6; ++i)
		for (int j = 0; j < 2; ++j)
			joint_lim[i][j] = joint_lim_v[i][j]*pi/180;

	double joint_v_lim_v[6] = { 100,100,100,465,350,535 };
	//double joint_a_lim_v[6] = { 536.10351934, 512.16932401, 653.3473183, 3297.1018813, 400.50877485, 2478.01871841 };
	for (int i = 0; i < 6; i++) {
		joint_v_lim[i] = joint_v_lim_v[i];
		joint_a_lim[i] = 10 * joint_v_lim_v[i];
	}

	MatrixXd offset_v(4, 4);
	offset_v.setIdentity();
	offset_distance = -212.5;
	offset_v(2, 3) = offset_distance;
	offset = offset_v;

	robot_type = "ABB";
}

//控制器角度值转为程序中的角度值
void IRB5400::c_to_p(double* thetas) {
	double t;
	t = thetas[1];
	thetas[1] = t - pi / 2;
	thetas[2] = -t + thetas[2];
	thetas[3] = thetas[3] - pi / 2;
	thetas[5] = thetas[5] - pi / 2;
}


//程序中的角度值转为控制器中的角度值
void IRB5400::p_to_c(double* thetas) {
	double t;
	t = thetas[1];
	thetas[1] = t + pi / 2;
	thetas[2] = t + thetas[2] + pi / 2;
	thetas[3] = thetas[3] + pi / 2;
	thetas[5] = thetas[5] + pi / 2;
}

//程序角度值转为控制器角度值(角度单位的)
void IRB5400::p_to_c_deg(double* thetas) {
	double t;
	t = thetas[1];
	thetas[1] = t + 90;
	thetas[2] = t + thetas[2] + 90;
	thetas[3] = thetas[3] + 90;
	thetas[5] = thetas[5] + 90;
}