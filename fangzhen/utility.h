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
	bool isEdge;  //是否为边角
	char * points;//对应的点集
	string points_str;//对应的点集
	int direction;//设定的轨迹方向
	int times;    //重复喷涂次数
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
	double X;//x坐标
	double Y;//y坐标
	double Z;//y坐标
	double A;//x角度
	double B;//y角度
	double C;//y角度
	tag_t _Tag;//特征点的标签
	char *Handle = ""; //特征点的永久句柄
	char Handle_[100]; //特征点的永久句柄(字符数组格式，用于生成tag，指针类型使用异常
};


//获取当前工程路径
//返回：<工艺类别\工程编号\工程方案号\> 路径
//cur_path:存当前项目号的txt文件路径
string get_curpro_path(string cur_path);

//获取当前路径
string current_directory();

//获取当前工程号
string get_curpro_name(string cur_path);

//获取指定目录下所有文件
void getfiles(string path, vector<string>& files);

//删除一个目录（包括下面所有文件）
void delete_folder(string folder_path);

//以指定字符分割字符串
vector<string> split(char* str, char* sep);

//字符串去除指定字符ch
void trim(string &s, char ch);

//读取文件全部内容
vector<NXOpen::NXString> get_file_content(string filename);

//获取.ini文件中所有的section名称
//filePath:.ini文件路径（必须为绝对路径）
//allSectionNames:存获取的section名称
void getAllSectionNames(char* filePath, vector<char*> &allSectionNames);


//检查某一目录是否存在
BOOL CheckFolderExist(const string &strPath);

//创建一个文件夹，如果已有文件夹，该文件夹下内容会清空
bool create_floder(string path);

//将str中的某个字符替换成另一个字符
string replace(string str, char c, string sub);

//从字符串中提取数字 
int parse_digit(char* str);


MatrixXd rotx(double t);
MatrixXd roty(double t);
MatrixXd rotz(double t);

MatrixXd euler_to_T(double x, double y, double z);
MatrixXd trans_to_T(double* trans);
void trans_to_quate_fz(double *trans, double* quate);

//斯密特正交化用到
double dot(double* v1, double* v2,int n);
double len(double* v,int n);
void normalize(double* v,int n);
//斯密特正交化
void orth_normal(double* mat);

void T_to_euler(MatrixXd T, double* euler);

//齐次变换矩阵求逆
MatrixXd inv_T(MatrixXd &T);

//齐次变换矩阵转四元数
//quate:double[7]
void t_to_q(MatrixXd &T, double* quate);

//四元数转齐次变换矩阵
//q:double[7]
MatrixXd q_to_t(double* q);

//计算四元数位置距离
double cal_d(double* q1, double*q2);