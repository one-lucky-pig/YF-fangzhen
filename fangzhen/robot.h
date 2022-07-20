#pragma once
#include <math.h>
#include <Eigen/Dense>   
#include <vector>
#include <fstream>
#include <unordered_set>
#include "utility.h"

using Eigen::MatrixXd;
using namespace std;

//������
class Robot {
public:
	vector< vector<double> > dh;
	double joint_lim[6][2]; //�ؽ���λ
	double joint_v_lim[6]; //�ؽ��ٶ�����
	double joint_a_lim[6]; //�ؽڼ��ٶ�����
	MatrixXd offset; //��ĩ��ƫ����	
	string robot_type; //���������� (ABB or FANUC)
	double offset_distance; //ƫ�ƾ��루������

	MatrixXd T(int i); //MDH��ģ�������������˱任����
	MatrixXd FK(double* thetas); //��������

	//������ؽڽǶ����ֵ
	vector<double> cal_t1(MatrixXd Td);
	vector<double> cal_t2(MatrixXd Td, double theta1);
	vector<double> cal_t3(MatrixXd Td, double theta1, double theta2);
	virtual vector<double> cal_t5(MatrixXd Td, double theta1, double theta2, double theta3)=0;
	virtual vector<double> cal_t4(MatrixXd Td, double theta1, double theta2, double theta3, double theta5)=0;
	virtual vector<double> cal_t6(MatrixXd Td, double theta1, double theta2, double theta3, double theta5)=0;
		
	vector<double*> IK(MatrixXd Td);//�򻯻��������
	MatrixXd cal_perr(MatrixXd Td, MatrixXd Ta); //����ĩ��λ��������
	double* choice_best_solution(vector<double*> &solutions, double* thetas); // ����������ѡ�����Ž⣨��thetas��ӽ�������⣩
	double* end_method_iter(MatrixXd Td, double *thetas, double threshold = 0.01,int no=0); //ĩ��λ�ò���������
	double* select_solution(vector<double*> &solutions, double* last_thetas); //ѡ�����Ž�
	double* inv_solution(MatrixXd Td, double* last_thetas,int no=0); //���ĳһ���׼ȷ���	
	//int pre_path(vector<MatrixXd> &points_data, double* ini_thetas);//���Ԥ���
	vector<double*> path(vector<MatrixXd> &points_data, double* ini_thetas,bool soft=true); //�������һ�ι켣���й켣������
	vector<double*> path(vector<MatrixXd> &points_data, double* ini_thetas,vector< vector<int> > &result); //�������һ�ι켣���й켣������,����������������Լ���λ��
	void solution_optimize(vector<double*> &solutions);	//����Ż�
	void solution_optimize_1(double* solution);	//����Ż�(������)
	virtual void c_to_p(double* thetas)=0;	//�������Ƕ�ֵתΪ����Ƕ�ֵ
	virtual void p_to_c(double* thetas)=0;	//����Ƕ�ֵתΪ�������Ƕ�ֵ
	virtual void p_to_c_deg(double* thetas) = 0; //����Ƕ�ֵתΪ�������Ƕ�ֵ(�Ƕȵ�λ��)
	double normal_range(double theta);		//���Ƕ�ֵת��Ϊ[-pi,pi]֮��
	void convert_to_deg(vector<double*> &thetas); //���ȹؽڽ�תΪ�Ƕȹؽڽ�
	void convert_to_deg(double* thetas); //���ȹؽڽ�תΪ�Ƕȹؽڽ�
	vector<int> is_limit(double* theta);	//���ĳ������Ƿ�ﵽ��λ
	vector< vector<int> > check_limit(vector<double*> thetas); //���ؽ���λ
	void reverse_offset(); //��תƫ�Ʒ���
	void reset_offset(); //����ƫ�Ʒ���
	virtual ~Robot();
};