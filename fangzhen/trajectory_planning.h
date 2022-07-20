#pragma once
#include<vector>
#include <Eigen/Dense>   
#include <assert.h>
#include "robot.h"

#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))

using Eigen::MatrixXd;
using namespace std;

//����ĩ���ٶȺ͹ؽ��ٶ����ƣ�����ʱ����
vector<double> cal_t_v(vector<MatrixXd> &space_data, vector<double*> &joint_data, double vmax, Robot *robot);
double find_t1(double dq1, double dq2, double dt1, double dt2, double amax);
double find_t2(double dq1, double dq2, double dt1, double dt2, double amax);

// ���ǹؽڼ��ٶ����ƣ��������ʱ����
void cal_t_a(vector<double*> &joint_data, vector<double> &time_diff, int max_iteration, Robot *robot);

vector<double> cal_t(vector<MatrixXd> &space_data, vector<double*> &joint_data, double vmax, Robot *robot);
vector<double> cal_v(vector<MatrixXd> &space_data, vector<double> &t);