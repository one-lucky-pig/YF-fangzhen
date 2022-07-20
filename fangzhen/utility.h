#pragma once

#include<string>
#include <fstream>
#include<windows.h>
#include<io.h>
#include <NXOpen/Session.hxx>
#include <Eigen/Dense>
#include "point.h"
#include "uf_ui.h"
#include <direct.h>
#include <math.h>

# define pi 3.1415926
#undef CreateDialog

using namespace NXOpen;
using namespace std;
using Eigen::MatrixXd;

struct robot {
	string id;
	string ip;
	string name;
};

struct Point_L {
	double coord[3];
	double normal[3];
	int tag;
	int area;
	bool dir;
	char* handle;
};

struct Subregion {
	bool isEdge;  //�Ƿ�Ϊ�߽�
	char * points;//��Ӧ�ĵ㼯
	string points_str;//��Ӧ�ĵ㼯
	int direction;//�趨�Ĺ켣����
	int times;    //�ظ���Ϳ����
};

//struct Robot {
//	NXOpen::Vector3d xdir, ydir;
//	NXOpen::Point3d originPoint;
//};
struct Rail {
	NXOpen::Vector3d xdir, ydir;
	NXOpen::Point3d originPoint;
};
struct Workpiece {
	NXOpen::Vector3d xdir, ydir;
	NXOpen::Point3d originPoint;
};
struct Offset {
	NXOpen::Vector3d xdir, ydir;
	NXOpen::Point3d originPoint;
};

struct Feature_POINT
{
	double X;//x����
	double Y;//y����
	double Z;//y����
	double A;//x�Ƕ�
	double B;//y�Ƕ�
	double C;//y�Ƕ�
	tag_t _Tag;//������ı�ǩ
	char *Handle = ""; //����������þ��
	char Handle_[100]; //����������þ��(�ַ������ʽ����������tag��ָ������ʹ���쳣
};


//��ȡ��ǰ����·��
//���أ�<�������\���̱��\���̷�����\> ·��
//cur_path:�浱ǰ��Ŀ�ŵ�txt�ļ�·��
string get_curpro_path(string cur_path);

//��ȡ��ǰ·��
string current_directory();

//��ȡ��ǰ���̺�
string get_curpro_name(string cur_path);

//��ȡָ��Ŀ¼�������ļ�
void getfiles(string path, vector<string>& files);

//ɾ��һ��Ŀ¼���������������ļ���
void delete_folder(string folder_path);

//��ָ���ַ��ָ��ַ���
vector<string> split(char* str, char* sep);

//�ַ���ȥ��ָ���ַ�ch
void trim(string &s, char ch);

//��ȡ�ļ�ȫ������
vector<NXOpen::NXString> get_file_content(string filename);

//��ȡ.ini�ļ������е�section����
//filePath:.ini�ļ�·��������Ϊ����·����
//allSectionNames:���ȡ��section����
void getAllSectionNames(char* filePath, vector<char*> &allSectionNames);


//���ĳһĿ¼�Ƿ����
BOOL CheckFolderExist(const string &strPath);

//����һ���ļ��У���������ļ��У����ļ��������ݻ����
bool create_floder(string path);

//��str�е�ĳ���ַ��滻����һ���ַ�
string replace(string str, char c, string sub);

//���ַ�������ȡ���� 
int parse_digit(char* str);


MatrixXd rotx(double t);
MatrixXd roty(double t);
MatrixXd rotz(double t);

MatrixXd euler_to_T(double x, double y, double z);
MatrixXd trans_to_T(double* trans);
void trans_to_quate_fz(double *trans, double* quate);

//˹�����������õ�
double dot(double* v1, double* v2,int n);
double len(double* v,int n);
void normalize(double* v,int n);
//˹����������
void orth_normal(double* mat);

void T_to_euler(MatrixXd T, double* euler);

//��α任��������
MatrixXd inv_T(MatrixXd &T);

//��α任����ת��Ԫ��
//quate:double[7]
void t_to_q(MatrixXd &T, double* quate);

//��Ԫ��ת��α任����
//q:double[7]
MatrixXd q_to_t(double* q);

//������Ԫ��λ�þ���
double cal_d(double* q1, double*q2);