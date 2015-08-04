#pragma once
#include "c4x4Matrix.h"
class c4Vector
{
public:
	float x[4]; 

	c4Vector AddV(c4Vector A, c4Vector B);
	c4x4Matrix OProduct(c4Vector A, c4Vector B);
	//float MinowskiMetric(c4Vector A);
	float ScalarProduct(c4Vector A, c4Vector B);

	c4Vector AddVS(double a);
	c4Vector SubVS(double a);
	c4Vector DivVS(double a);
	c4Vector MultVS(double a);
	

	c4Vector()
	{
		for (int i = 0; i < 4; i++) x[i] = 0;
	}
	~c4Vector();
};

