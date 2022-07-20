#pragma once
#include "irb5500.h"

class IRB5400:public IRB5500{
public:
	IRB5400();
	
	//控制器角度值转为程序中的角度值
	void c_to_p(double* thetas);

	//程序中的角度值转为控制器中的角度值
	void p_to_c(double* thetas);
	void p_to_c_deg(double* thetas);

};
