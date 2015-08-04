#pragma once
#include "c4Vector.h"
class cEvent :
	public c4Vector
{
public:
	cEvent(float x0=0, float x1 = 0, float x2 = 0, float x3 = 0);
	
	~cEvent();
};

