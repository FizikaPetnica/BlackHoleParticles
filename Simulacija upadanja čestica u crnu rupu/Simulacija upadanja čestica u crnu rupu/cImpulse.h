#pragma once
#include "c4Vector.h"
#include "cVelocity.h"

class cImpulse :
	public c4Vector
{
public:
	//cImpulse( cVelocity U, float m = 0);
	cImpulse();
	~cImpulse();
};

