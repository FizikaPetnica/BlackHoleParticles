#include "stdafx.h"
#include "c2Tensor.h"




c2Tensor::c2Tensor(int t00, int t01, int t02, int t03, int t10, int t11, int t12, int t13, int t20, int t21, int t22, int t23, int t30, int t31, int t32, int t33)
{
	t[0][0] = t00;
	t[0][1] = t01;
	t[0][2] = t02;
	t[0][3] = t03;
	t[1][0] = t10;
	t[1][1] = t11;
	t[1][2] = t12;
	t[1][3] = t13;
	t[2][0] = t20;
	t[2][1] = t21;
	t[2][2] = t22;
	t[2][3] = t23;
	t[3][0] = t30;
	t[3][1] = t31;
	t[3][2] = t32;
	t[3][3] = t33;
}

c2Tensor::~c2Tensor()
{
}
