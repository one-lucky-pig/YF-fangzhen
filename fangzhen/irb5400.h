#pragma once
#include "irb5500.h"

class IRB5400:public IRB5500{
public:
	IRB5400();
	
	//�������Ƕ�ֵתΪ�����еĽǶ�ֵ
	void c_to_p(double* thetas);

	//�����еĽǶ�ֵתΪ�������еĽǶ�ֵ
	void p_to_c(double* thetas);
	void p_to_c_deg(double* thetas);

};
