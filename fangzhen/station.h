#pragma once
#include <math.h>
#include <Eigen/Dense>   
#include <vector>
#include "utility.h"

using Eigen::MatrixXd;
using namespace std;

class Station {
public:
	double convery_v; //导轨速度
	double start_distance;  //机器人启动距离
	double transition_time; //机器人从Home点位置到达第一个点的时间（过渡时间）
	double tool_speed; //工具速度（TCP速度）
	//r:robot
	//0:大地
	//t：tool->工具
	//e:end->机器人末端
	//w:workobj->工件坐标系
	//m:model->模型坐标系
	MatrixXd Tr0;	//机器人坐标系在大地坐标系位姿
	MatrixXd Tte;	//工具坐标系在机器人末端位姿
	MatrixXd Tw0;	//工件坐标系在大地坐标系初始位姿
	MatrixXd Twm;	//工件坐标系相对于模型坐标系变换矩阵
	//MatrixXd Tt0;	//工具坐标系相对于大地坐标系变换矩阵
	MatrixXd Ter;   //机器人末端相对于机器人坐标系变换矩阵
	MatrixXd INI_Tte;//未计TCP偏移距离的工具坐标系相对于机器人末端变换矩阵
	MatrixXd Tmw; //模型坐标相对于工件坐标系变换矩阵
	MatrixXd Tmr; //模型坐标系相对于机器人坐标系变换矩阵
	MatrixXd convery_move_v; //导轨速度矢量（在工件坐标系下）
	string type; //工作站类型，ABB or FANUC
	//程序参数
	double tcp_d;//TCP距离
	string move_type;//运动形式
	double acc;//到达精度,"z50","z60"等等
	//构造函数
	Station();
	Station(MatrixXd Tr0, MatrixXd Tet, MatrixXd Tw0, MatrixXd Twm, MatrixXd Ter,string type);
	void set_convery_v(MatrixXd v); //设置导轨速度矢量
	void set_start_distance(double start_distance); //设置机器人启动距离
	void set_transition_time(double transition_time); //设置过渡时间
	void set_tool_speed(double tool_speed); //设置TCP速度
};

