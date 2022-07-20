#include <math.h>
#include <Eigen/Dense>   
#include <vector>
#include "process_data.h"
#include "trajectory_planning.h"
#include"station.h"
#define max(a,b) ((a) > (b) ? (a) : (b))

// 考虑末端速度和外部轴运动，估算两点之间的运动时间
// convery_v 是3X1的矩阵

vector<double> cal_dt(vector<MatrixXd> &data, Station &staion);

//考虑关节速度限制，估算两点之间的运算时间
vector<double> cal_dt_J(vector<double> &t, vector<double*> &joint_data, Robot *robot);

//运动仿真
//ini_thetas为程序格式
//data为工件坐标系下的矩阵形式
void simulation(vector<MatrixXd> &data, Robot *robot, double* ini_thetas, double R,Station &station,vector<double> &v, vector<double> &t);

