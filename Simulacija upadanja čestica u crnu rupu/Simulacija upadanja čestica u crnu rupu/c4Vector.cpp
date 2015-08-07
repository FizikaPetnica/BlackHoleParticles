#include "stdafx.h"
#include "c4Vector.h"
#include <math.h>
#include "c2Tensor.h"

//extern c2Tensor MinowskiMetric;

c4Vector c4Vector::AddV(c4Vector A, c4Vector B)
{
	c4Vector C;
	for (int i = 0; i < 4; i++)
		C.x[i] = A.x[i] + B.x[i];
	return c4Vector();
}

/*float c4Vector::MinowskiMetric(c4Vector A)
{
	return MinowskiMetric.TProduct(A, A);//??
}*/

/*c4x4Matrix c4Vector::OProduct(c4Vector A, c4Vector B)
{
	c4x4Matrix C;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			C.t[i][j] = A.x[i] * B.x[j];
	return C;
}*/

float c4Vector::ScalarProduct(c4Vector A, c4Vector B)
{
	return A.x[0] * B.x[0] + A.x[1] * B.x[1] + A.x[2] * B.x[2] + A.x[3] * B.x[3];
}

//c4Vector c4Vector::AddVS(double a)
//{
//	for (int j = 0; j < 4; j++)
//	{
//		x[j] = x[j] + a;
//	}
//}
//
//c4Vector c4Vector::SubVS(double a)
//{
//	for (int j = 0; j < 4; j++)
//	{
//		x[j] = x[j] - a;
//	}
//}
//
//c4Vector c4Vector::DivVS(double a)
//{
//	for (int j = 0; j < 4; j++)
//	{
//		x[j] = x[j] / a;
//	}
//}
//
//c4Vector c4Vector::MultVS(double a)
//{
//	for (int j = 0; j < 4; j++)
//	{
//		x[j] = x[j] * a;
//	}
//}



c4Vector::~c4Vector()
{
}
