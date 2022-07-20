#pragma once
#include <math.h>
#include <Eigen/Dense>   
#include <vector>
#include "utility.h"

using Eigen::MatrixXd;
using namespace std;

class Station {
public:
	double convery_v; //�����ٶ�
	double start_distance;  //��������������
	double transition_time; //�����˴�Home��λ�õ����һ�����ʱ�䣨����ʱ�䣩
	double tool_speed; //�����ٶȣ�TCP�ٶȣ�
	//r:robot
	//0:���
	//t��tool->����
	//e:end->������ĩ��
	//w:workobj->��������ϵ
	//m:model->ģ������ϵ
	MatrixXd Tr0;	//����������ϵ�ڴ������ϵλ��
	MatrixXd Tte;	//��������ϵ�ڻ�����ĩ��λ��
	MatrixXd Tw0;	//��������ϵ�ڴ������ϵ��ʼλ��
	MatrixXd Twm;	//��������ϵ�����ģ������ϵ�任����
	//MatrixXd Tt0;	//��������ϵ����ڴ������ϵ�任����
	MatrixXd Ter;   //������ĩ������ڻ���������ϵ�任����
	MatrixXd INI_Tte;//δ��TCPƫ�ƾ���Ĺ�������ϵ����ڻ�����ĩ�˱任����
	MatrixXd Tmw; //ģ����������ڹ�������ϵ�任����
	MatrixXd Tmr; //ģ������ϵ����ڻ���������ϵ�任����
	MatrixXd convery_move_v; //�����ٶ�ʸ�����ڹ�������ϵ�£�
	string type; //����վ���ͣ�ABB or FANUC
	//�������
	double tcp_d;//TCP����
	string move_type;//�˶���ʽ
	double acc;//���ﾫ��,"z50","z60"�ȵ�
	//���캯��
	Station();
	Station(MatrixXd Tr0, MatrixXd Tet, MatrixXd Tw0, MatrixXd Twm, MatrixXd Ter,string type);
	void set_convery_v(MatrixXd v); //���õ����ٶ�ʸ��
	void set_start_distance(double start_distance); //���û�������������
	void set_transition_time(double transition_time); //���ù���ʱ��
	void set_tool_speed(double tool_speed); //����TCP�ٶ�
};

