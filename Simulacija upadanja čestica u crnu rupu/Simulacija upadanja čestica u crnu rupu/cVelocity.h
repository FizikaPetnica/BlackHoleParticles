#pragma once
#include "c4Vector.h"
#include "math.h"
class cVelocity :
	public c4Vector
{
public:
	
	float Beta() { return sqrt(x[1] * x[1] + x[2] * x[2] + x[3] * x[3]); }
	float Gamma() { return 1 / sqrt(1 - Beta()*Beta()); }
	cVelocity();
	~cVelocity();
};

