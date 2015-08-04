#pragma once
#include "c4Vector.h"
#include "c4Force.h"
class cAcceleration :
	public c4Vector
{
public:
	cAcceleration(c4Force A, float M);
	cAcceleration();
	~cAcceleration();
};

