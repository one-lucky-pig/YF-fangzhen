#pragma once
// 定义一些轨迹点预处理的函数

#include <math.h>
#include <Eigen/Dense>   
#include <vector>
#include <iostream> 
#include "station.h"
#include "utility.h"
using Eigen::MatrixXd;
using namespace std;


// 将(工件坐标系下)数据转换成6轴末端到机器人坐标系格式
// convery_move_v 是3X1的矩阵
vector<MatrixXd> convert_data(vector<MatrixXd> &data, vector<double> &tdata, Station &station);


//(轨迹点)加转弯半径插值
vector<MatrixXd> interpolation_r(vector<MatrixXd> &data, double R, double accuracy = 1);


//等间隔采样
vector<MatrixXd> sampling_d(vector<MatrixXd> &data, double d = 10);
