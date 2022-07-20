#pragma once
#include <string>
#include <Eigen/Dense>

using Eigen::MatrixXd;
using namespace std;

//定义点类
class POINT_p {
public:
	int index; //序号（轨迹点）
	MatrixXd T;//位姿信息
	double matx[16];//数组形式的位姿信息(按行存储)，移动工具需用到
	int set_param;//参数刷新位置百分比（0-100），0：该点生效，100：下一个轨迹点生效
	//工具位置信息
	double tool_x;
	double tool_y;
	double tool_z;
//工艺参数
	double sector1;//扇面1
	double sector2;//扇面2
	double atom;//雾化
	double voltage;//电压
	double flow;//流量
	double width;//扇面宽度
	double effic;//转换效率
	double content;//固体含量
	double rot;//转速
	string is_on;//开关枪状态
	bool is_node; //是否为节点
	double thick;  //膜厚（点云）
	double thick_rate;//膜厚一致性（点云）
	double distri[5];//膜厚分布，旋杯或喷枪膜厚截面一侧分布挡位
	bool is_cover;//是否被喷到（点云）
	double v;//真实速度
	double move_t;//从上一个点运动到该点时间

	double nz[3];//法向量
	
	POINT_p();
	//void cal_T();
	void cal_matx();//计算数组形式的位姿信息

	double X();//获取X
	double Y();//获取Y
	double Z();//获取Z
	
	//判断否位于某两点之间
	bool is_between(POINT_p &p1, POINT_p &p2);

	//获取位置向量
	MatrixXd P();

	//计算与另一点距离
	double distance(POINT_p &ponit);

	//计算该点X轴与另一点X轴夹角
	double x_jj(POINT_p &point);

};