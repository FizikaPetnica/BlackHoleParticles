#pragma once
#include "c4Vector.h"
class c4x4Matrix
{
public:
	float t[4][4];

	c4x4Matrix Transpose(c4x4Matrix A);
	c4x4Matrix OProduct(c4x4Matrix A, c4x4Matrix B);
	c4x4Matrix AddM(c4x4Matrix A, c4x4Matrix B);

	//float TProduct(c4Vector A, c4Vector B);

	//By Scalar
	//c4x4Matrix AddMS(double a);
	//c4x4Matrix SubMS(double a);
	//c4x4Matrix DivMS(double a);
	//c4x4Matrix MultMS(double a);

	c4x4Matrix(); 
	~c4x4Matrix();
};

