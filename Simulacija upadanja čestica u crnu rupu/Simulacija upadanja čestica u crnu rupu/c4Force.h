#pragma once
#include "c4Vector.h"
#include "cParticle.h"
class c4Force :
	public c4Vector
{
public:
	c4Force(cParticle A, cParticle B);
	c4Force();
	~c4Force();
};

