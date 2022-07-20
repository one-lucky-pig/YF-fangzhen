#pragma once
#include <string>
#include <Eigen/Dense>

using Eigen::MatrixXd;
using namespace std;

//�������
class POINT_p {
public:
	int index; //��ţ��켣�㣩
	MatrixXd T;//λ����Ϣ
	double matx[16];//������ʽ��λ����Ϣ(���д洢)���ƶ��������õ�
	int set_param;//����ˢ��λ�ðٷֱȣ�0-100����0���õ���Ч��100����һ���켣����Ч
	//����λ����Ϣ
	double tool_x;
	double tool_y;
	double tool_z;
//���ղ���
	double sector1;//����1
	double sector2;//����2
	double atom;//��
	double voltage;//��ѹ
	double flow;//����
	double width;//������
	double effic;//ת��Ч��
	double content;//���庬��
	double rot;//ת��
	string is_on;//����ǹ״̬
	bool is_node; //�Ƿ�Ϊ�ڵ�
	double thick;  //Ĥ�񣨵��ƣ�
	double thick_rate;//Ĥ��һ���ԣ����ƣ�
	double distri[5];//Ĥ��ֲ�����������ǹĤ�����һ��ֲ���λ
	bool is_cover;//�Ƿ��絽�����ƣ�
	double v;//��ʵ�ٶ�
	double move_t;//����һ�����˶����õ�ʱ��

	double nz[3];//������
	
	POINT_p();
	//void cal_T();
	void cal_matx();//����������ʽ��λ����Ϣ

	double X();//��ȡX
	double Y();//��ȡY
	double Z();//��ȡZ
	
	//�жϷ�λ��ĳ����֮��
	bool is_between(POINT_p &p1, POINT_p &p2);

	//��ȡλ������
	MatrixXd P();

	//��������һ�����
	double distance(POINT_p &ponit);

	//����õ�X������һ��X��н�
	double x_jj(POINT_p &point);

};