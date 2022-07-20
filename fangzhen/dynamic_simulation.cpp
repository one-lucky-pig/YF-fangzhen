
#include "dynamic_simulation.h"

using Eigen::MatrixXd;
using namespace std;

// 考虑末端速度和外部轴运动，估算两点之间的运动时间

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

//考虑关节速度限制，估算两点之间的运算时间
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

//运动仿真
//ini_thetas为程序格式
//data为工件坐标系下的矩阵形式
void simulation(vector<MatrixXd> &data, Robot *robot, double* ini_thetas, double R, Station &station, vector<double> &v,vector<double> &t) {
	vector<MatrixXd> data_p=interpolation_r(data,R);// 加转弯半径插值
	data_p = sampling_d(data_p, 100);// 采样
	vector<double> t_data = cal_dt(data_p, station);//以末端速度估计两点运动时间
	vector<MatrixXd> data_r = convert_data(data_p, t_data, station);	//转换坐标系（6轴末端到机器人坐标系）
	vector<double*> joint_data = robot->path(data_r, ini_thetas); //求逆解
	robot->convert_to_deg(joint_data);

	t_data = cal_dt_J(t_data,joint_data,robot);//考虑关节速度限制，估算两点之间的运算时间
	data_r = convert_data(data_p, t_data, station);	//转换坐标系（6轴末端到机器人坐标系）
	joint_data = robot->path(data_r, ini_thetas); //求逆解
	robot->convert_to_deg(joint_data);

	t=cal_t(data_p,joint_data, station.tool_speed,robot); // 计算运动时间（节拍）*可考虑导轨速度
	v=cal_v(data_p,t);	//计算速度 *可考虑导轨速度

	//考虑计算得出的运动时间，再次转换数据
	t.insert(v.begin(), t_data[0]);
	t_data = t;
	data_r = convert_data(data_p, t_data, station);	//转换坐标系（6轴末端到机器人坐标系）
	joint_data = robot->path(data_r, ini_thetas); //求逆解
	robot->convert_to_deg(joint_data);

	t = cal_t(data_p, joint_data, station.tool_speed, robot); // 计算运动时间（节拍）*可考虑导轨速度
	v = cal_v(data_p, t);	//计算速度 *可考虑导轨速度

}



