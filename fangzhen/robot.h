#pragma once
#include <math.h>
#include <Eigen/Dense>   
#include <vector>
#include <fstream>
#include <unordered_set>
#include "utility.h"

using Eigen::MatrixXd;
using namespace std;

//抽象类
class Robot {
public:
	vector< vector<double> > dh;
	double joint_lim[6][2]; //关节限位
	double joint_v_lim[6]; //关节速度限制
	double joint_a_lim[6]; //关节加速度限制
	MatrixXd offset; //简化末端偏移量	
	string robot_type; //机器人类型 (ABB or FANUC)
	double offset_distance; //偏移距离（带方向）

	MatrixXd T(int i); //MDH建模法，相邻两连杆变换矩阵
	MatrixXd FK(double* thetas); //计算正解

	//计算各关节角度逆解值
	vector<double> cal_t1(MatrixXd Td);
	vector<double> cal_t2(MatrixXd Td, double theta1);
	vector<double> cal_t3(MatrixXd Td, double theta1, double theta2);
	virtual vector<double> cal_t5(MatrixXd Td, double theta1, double theta2, double theta3)=0;
	virtual vector<double> cal_t4(MatrixXd Td, double theta1, double theta2, double theta3, double theta5)=0;
	virtual vector<double> cal_t6(MatrixXd Td, double theta1, double theta2, double theta3, double theta5)=0;
		
	vector<double*> IK(MatrixXd Td);//简化机构求逆解
	MatrixXd cal_perr(MatrixXd Td, MatrixXd Ta); //计算末端位置误差矩阵
	double* choice_best_solution(vector<double*> &solutions, double* thetas); // 迭代过程中选择最优解（与thetas最接近的那组解）
	double* end_method_iter(MatrixXd Td, double *thetas, double threshold = 0.01,int no=0); //末端位置补偿迭代法
	double* select_solution(vector<double*> &solutions, double* last_thetas); //选择最优解
	double* inv_solution(MatrixXd Td, double* last_thetas,int no=0); //求出某一点的准确逆解	
	//int pre_path(vector<MatrixXd> &points_data, double* ini_thetas);//逆解预求解
	vector<double*> path(vector<MatrixXd> &points_data, double* ini_thetas,bool soft=true); //求出行走一段轨迹所有轨迹点的逆解
	vector<double*> path(vector<MatrixXd> &points_data, double* ini_thetas,vector< vector<int> > &result); //求出行走一段轨迹所有轨迹点的逆解,并获得所有无逆解点以及限位点
	void solution_optimize(vector<double*> &solutions);	//逆解优化
	void solution_optimize_1(double* solution);	//逆解优化(单个点)
	virtual void c_to_p(double* thetas)=0;	//控制器角度值转为程序角度值
	virtual void p_to_c(double* thetas)=0;	//程序角度值转为控制器角度值
	virtual void p_to_c_deg(double* thetas) = 0; //程序角度值转为控制器角度值(角度单位的)
	double normal_range(double theta);		//将角度值转化为[-pi,pi]之间
	void convert_to_deg(vector<double*> &thetas); //弧度关节角转为角度关节角
	void convert_to_deg(double* thetas); //弧度关节角转为角度关节角
	vector<int> is_limit(double* theta);	//检查某个逆解是否达到限位
	vector< vector<int> > check_limit(vector<double*> thetas); //检查关节限位
	void reverse_offset(); //反转偏移方向
	void reset_offset(); //重置偏移方向
	virtual ~Robot();
};