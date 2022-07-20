#include <math.h>
#include <Eigen/Dense>   
#include <vector>
#include "process_data.h"
#include "trajectory_planning.h"
#include"station.h"
#define max(a,b) ((a) > (b) ? (a) : (b))

// ����ĩ���ٶȺ��ⲿ���˶�����������֮����˶�ʱ��
// convery_v ��3X1�ľ���

vector<double> cal_dt(vector<MatrixXd> &data, Station &staion);

//���ǹؽ��ٶ����ƣ���������֮�������ʱ��
vector<double> cal_dt_J(vector<double> &t, vector<double*> &joint_data, Robot *robot);

//�˶�����
//ini_thetasΪ�����ʽ
//dataΪ��������ϵ�µľ�����ʽ
void simulation(vector<MatrixXd> &data, Robot *robot, double* ini_thetas, double R,Station &station,vector<double> &v, vector<double> &t);

