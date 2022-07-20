#include "p250ib.h"

P250IB::P250IB() {
	//DH参数
	double dh_v[6][4] = { { 0, 0, 0, 0 },{ -pi / 2, 0, 0, -pi / 2 },{ 0, 0, 1400, pi },{ -pi / 2, 1363.6, 0, pi / 2 },
	{ 0,106.418, 0,70 * pi / 180 },{ pi / 2, 81, 0, -70 * pi / 180 } };

	for (int i = 0; i < 6; i++) {
		vector<double> dh_i;
		for (int j = 0; j < 4; j++)
			dh_i.push_back(dh_v[i][j]);
		this->dh.push_back(dh_i);
	}

	//关节限位
	double joint_lim_v[6][2] = { {-100,100},{-30,140},{-75,255},{-360,360},{ -360,360 },{ -360,360 } };
	for (int i = 0; i < 6; ++i)
		for (int j = 0; j < 2; ++j)
			joint_lim[i][j] = joint_lim_v[i][j];
	beta = 70 * pi / 180;
	MatrixXd offset_v(4, 4);
	offset_v.setIdentity();
	//偏移到0位时的4轴末端
	//offset_v(0, 3) = -69.28;
	offset_distance = -82;
	offset_v(2, 3) = offset_distance;
	offset = offset_v;
	robot_type = "FANUC";
}

vector<double> P250IB::cal_t1(MatrixXd Td) {
	double px = Td(0, 3);
	double py = Td(1, 3);
	double t1 = atan2(py, px);
	double t11 = atan2(-py, -px);
	vector<double> res;
	res.push_back(t1);
	res.push_back(t11);
	return res;
}

vector<double>  P250IB::cal_t3(MatrixXd Td, double theta1) {
	double px = Td(0, 3);
	double py = Td(1, 3);
	double pz = Td(2, 3);
	double d1 = dh[0][1];
	double d4 = dh[3][1];
	double a1 = dh[1][2];
	double a2 = dh[2][2];
	double s3;
	s3 = (pow(px / cos(theta1), 2) + pz *pz - a2*a2 - d4*d4) / (2 * a2*d4);
	vector<double> res;
	double t3 = atan2(s3, sqrt(1 - s3*s3));
	double t31 = atan2(s3, -sqrt(1 - s3*s3));
	res.push_back(t3);
	res.push_back(t31);
	return res;
}

vector<double>  P250IB::cal_t2(MatrixXd Td, double theta1, double theta3) {
	double px = Td(0, 3);
	double py = Td(1, 3);
	double pz = Td(2, 3);
	double d1 = dh[0][1];
	double d4 = dh[3][1];
	double a1 = dh[1][2];
	double a2 = dh[2][2];
	double a = -d4*cos(theta3);
	double b = a2 + d4*sin(theta3);
	double c = pz;
	double d = px / cos(theta1);
	vector<double> res;
	double t2 = atan2(a*d - b*c, a*c + b*d);
	res.push_back(t2);
	//res.push_back(t2 - 2 * pi);
	return res;
}


vector<double> P250IB::cal_t5(MatrixXd Td, double theta1, double theta2, double theta3) {
	double ax = Td(0, 2);
	double ay = Td(1, 2);
	double az = Td(2, 2);
	double c5 = (ax*cos(theta1)*sin(theta2 - theta3) + ay*sin(theta1)*sin(theta2 - theta3) + az*cos(theta2 - theta3) + cos(beta)*cos(beta)) / (-sin(beta)*sin(beta));
	vector<double> res;
	if (abs(c5) > 1) return res;
	double t5 = atan2(sqrt(1 - c5*c5), c5);
	double t51 = atan2(-sqrt(1 - c5*c5), c5);
	res.push_back(t5);
	res.push_back(t51);
	return res;
}

vector<double> P250IB::cal_t4(MatrixXd Td, double theta1, double theta2, double theta3, double theta5) {
	double ax = Td(0, 2);
	double ay = Td(1, 2);
	double az = Td(2, 2);
	vector<double> res;
	double a = cos(beta)*(1 - cos(theta5));
	double b = -sin(theta5);
	double s23 = sin(theta2 - theta3);
	double c23 = cos(theta2 - theta3);
	double c = (ay*cos(theta1) - ax*sin(theta1)) / sin(beta);
	double d = (ax*cos(theta1)*c23 + ay*sin(theta1)*c23 - az*s23) / sin(beta);
	double t4 = atan2(a*d - b*c, a*c + b*d);
	res.push_back(t4);
	return res;
}


vector<double> P250IB::cal_t6(MatrixXd Td, double theta1, double theta2, double theta3, double theta5) {
	double nx = Td(0, 0);
	double ny = Td(1, 0);
	double nz = Td(2, 0);
	double ox = Td(0, 1);
	double oy = Td(1, 1);
	double oz = Td(2, 1);
	vector<double> res;
	double a = sin(theta5);
	double b = cos(beta)*(1 - cos(theta5));
	double s23 = sin(theta2 - theta3);
	double c23 = cos(theta2 - theta3);
	double c = (-nx*cos(theta1)*s23 - ny*sin(theta1)*s23 - nz*c23) / sin(beta);
	double d = (ox*cos(theta1)*s23 + oy*sin(theta1)*s23 + oz*c23) / sin(beta);
	double t6 = atan2(a*d - b*c, a*c + b*d);
	res.push_back(t6);
	return res;
}

//求出某一点所有逆解
vector<double*> P250IB::IK(MatrixXd Td) {
	vector<double*> solutions;
	vector<double> t1s = cal_t1(Td);
	for (int i1 = 0; i1 < t1s.size(); i1++) {
		double theta1 = t1s[i1];
		vector<double> t3s = cal_t3(Td, theta1);
		for (int i2 = 0; i2 < t3s.size(); i2++) {
			double theta3 = t3s[i2];
			vector<double> t2s = cal_t2(Td, theta1, theta3);
			for (int i3 = 0; i3 < t2s.size(); i3++) {
				double theta2 = t2s[i3];
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


//控制器角度值转为程序中的角度值
void P250IB::c_to_p(double* thetas) {
	double t;
	t = thetas[1];
	thetas[1] = t - pi / 2;
	thetas[2] = t + thetas[2];
	thetas[3] = thetas[3] - pi / 2;
	thetas[5] = thetas[5] + pi / 2;
}


//程序中的角度值转为控制器中的角度值
void P250IB::p_to_c(double* thetas) {
	double t;
	t = thetas[1];
	thetas[1] = t + pi / 2;
	thetas[2] = -t + thetas[2] - pi / 2;
	thetas[3] = thetas[3] + pi / 2;
	thetas[5] = thetas[5] - pi / 2;
}

//程序角度值转为控制器角度值(角度单位的)
void P250IB::p_to_c_deg(double* thetas) {
	double t;
	t = thetas[1];
	thetas[1] = t + 90;
	thetas[2] = -t + thetas[2] - 90;
	thetas[3] = thetas[3] + 90;
	thetas[5] = thetas[5] - 90;
}