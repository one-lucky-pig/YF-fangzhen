#include "point.h"


POINT_p::POINT_p() {
	/*this->trans[12] = 0;
	this->trans[13] = 0;
	this->trans[14] = 0;
	this->trans[15] = 1;*/
	this->T = MatrixXd(4, 4);
	this->T.setIdentity();
	this->set_param = 50;
	this->sector1 = 300;//扇面1
	this->sector2 = 300;//扇面2
	this->atom = 100;//雾化
	this->voltage = 70;//电压kv
	this->flow = 400;//流量cc/mim
	this->width = 0.25;//扇面宽度m
	this->effic = 0.35;//转换效率
	this->content = 0.4;//固体含量
	this->rot = 30;//转速kr/min
	this->v = 0;//实际速度mm/s
	this->is_on = "ON";//喷具状态
	this->is_node = false;//是否为节点
	this->thick = 0;//膜厚
	this->thick_rate = 0;
	this->is_cover = false;
	this->move_t = 0;

	for (int i = 0; i<5; i++) {
		this->distri[i] = 0;
	}
}

//void POINT_p::cal_T() {
//	this->T = MatrixXd(4, 4);
//	int i, j;
//	for (i = 0; i < 4; i++)
//		for (j = 0; j < 4; j++)
//			this->T(i, j) = this->trans[i * 4 + j];
//}
//

void POINT_p::cal_matx() {
	int r, c;
	for (int i = 0; i < 16; i++) {
		r = i / 4;
		c = i % 4;
		this->matx[i]=this->T(r,c);
	}
 }

double POINT_p::X() {
	return this->matx[3];
	//return this->T(0, 3);
}

double POINT_p::Y() {
	return this->matx[7];
	//return this->T(1, 3);
}

double POINT_p::Z() {
	return this->matx[11];
	//return this->T(2, 3);
}

bool POINT_p::is_between(POINT_p &p1, POINT_p &p2) {
	MatrixXd v1 = p1.T.block(0, 3, 3, 1) - T.block(0, 3, 3, 1);
	MatrixXd v2 = p2.T.block(0, 3, 3, 1) - T.block(0, 3, 3, 1);
	double res = 0;
	for (int i = 0; i < 3; i++)
		res += v1(i, 0)*v2(i, 0);
	return res < 0 ? true : false;
}

MatrixXd POINT_p::P() {
	return T.block(0, 3, 3, 1);
}

double POINT_p::distance(POINT_p &point) {
	return (P()-point.P()).norm();
}

double POINT_p::x_jj(POINT_p &point) {
	double jj = 0;
	for (int i = 0; i < 3; i++)
		jj += T(i, 0)*(point.T(i, 0));
	jj = acos(jj);
	return jj;
}