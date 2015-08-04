#pragma once
#include "c4x4Matrix.h"
#include "c4Vector.h"
#include "c4x4x4Matrix.h"
#include "cEvent.h"
#include "cMetricTensor.h"
#include "cCMetricTensor.h"
class cCristofell
	:public c4x4x4Matrix
{
public:
	c4Vector Cristofell(c4Vector A);
	cCristofell(cEvent Event);

	~cCristofell();
};

