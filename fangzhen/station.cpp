#include "station.h"

Station::Station() {};

Station::Station(MatrixXd Tr0, MatrixXd Tte, MatrixXd Tw0, MatrixXd Twm, MatrixXd Ter,string type) {
	this->Tr0 = Tr0;
	this->Tte = Tte;
	this->Tw0 = Tw0;
	this->Twm = Twm;
	//this->Tt0 = Tt0;
	this->INI_Tte = Tte;
	this->Ter = Ter;
	this->Tmw = inv_T(this->Twm);
	this->Tmr = inv_T(Tr0)*Tw0*inv_T(Twm);
	//this->set_convery_v(43.8);
	this->set_start_distance(1000);
	this->type = type;
	//程序参数
	this->tcp_d=250;
	this->move_type=string("PaintL");
	this->tool_speed = 500;
	this->acc = 50;
}

void Station::set_convery_v(MatrixXd v) {

	this->convery_move_v = v;

	//MatrixXd v1(3, 1);
	//v1.setZero();
	//v1(0, 0) = this->convery_v;	//默认沿大地坐标系x轴运动
	//this->convery_move_v = v1;

}
void Station::set_start_distance(double start_distance) {
	this->start_distance = start_distance;
}
void Station::set_transition_time(double transition_time) {
	this->transition_time = transition_time;

}
void Station::set_tool_speed(double tool_speed) {
	this->tool_speed = tool_speed;
}

