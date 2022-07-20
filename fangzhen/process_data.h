#pragma once
// ����һЩ�켣��Ԥ����ĺ���

#include <math.h>
#include <Eigen/Dense>   
#include <vector>
#include <iostream> 
#include "station.h"
#include "utility.h"
using Eigen::MatrixXd;
using namespace std;


// ��(��������ϵ��)����ת����6��ĩ�˵�����������ϵ��ʽ
// convery_move_v ��3X1�ľ���
vector<MatrixXd> convert_data(vector<MatrixXd> &data, vector<double> &tdata, Station &station);


//(�켣��)��ת��뾶��ֵ
vector<MatrixXd> interpolation_r(vector<MatrixXd> &data, double R, double accuracy = 1);


//�ȼ������
vector<MatrixXd> sampling_d(vector<MatrixXd> &data, double d = 10);
