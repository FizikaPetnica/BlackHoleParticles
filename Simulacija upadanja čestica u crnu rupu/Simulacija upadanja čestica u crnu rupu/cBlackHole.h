#pragma once
#include "cEvent.h"


class cBlackHole
{
public:
	float RestMass, Rotation, Charge, Energy = 0;
	cEvent BlackHoleEvent();
	
	cBlackHole();
	~cBlackHole();
};

