#include "stdafx.h"
#include "c4x4Matrix.h"
#include "c4Vector.h"


c4x4Matrix c4x4Matrix::Transpose(c4x4Matrix A)
{
	c4x4Matrix B;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			B.t[i][j] = A.t[j][i];
	return c4x4Matrix();
}

c4x4Matrix c4x4Matrix::OProduct(c4x4Matrix A, c4x4Matrix B)
{
	c4x4Matrix C, Bp=Transpose(B);
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			C.t[i][j] = A.t[i][0] * B.t[j][0] + A.t[i][1] * B.t[j][1] + A.t[i][2] * B.t[j][2] + A.t[i][3] * B.t[j][3];
	return C;

}

c4x4Matrix c4x4Matrix::AddM(c4x4Matrix A, c4x4Matrix B)
{
	c4x4Matrix C;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			C.t[i][j] = A.t[i][j] + B.t[i][j];
	return C;
}

float c4x4Matrix::TProduct(c4Vector A, c4Vector B)
{
	float S;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			S=t[i][j] * A.x[i] * A.x[j];
		}
	}

	return S;
}

c4x4Matrix c4x4Matrix::AddMS(double a)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			t[i][j] = t[i][j] + a;
		}
	}
}

c4x4Matrix c4x4Matrix::SubMS(double a)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			t[i][j] = t[i][j] - a;
		}
	}
}

c4x4Matrix c4x4Matrix::DivMS(double a)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			t[i][j] = t[i][j] / a;
		}
	}
}

c4x4Matrix c4x4Matrix::MultMS(double a)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			t[i][j] = t[i][j] * a;
		}
	}
}

c4x4Matrix::c4x4Matrix()
{
}


c4x4Matrix::~c4x4Matrix()
{
}
