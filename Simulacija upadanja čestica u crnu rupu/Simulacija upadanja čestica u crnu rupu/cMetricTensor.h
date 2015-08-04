#pragma once
#include "c4x4Matrix.h"
#include "cEvent.h"
#include "cBlackHole.h"
class cMetricTensor :
	public c4x4Matrix
{
public:
	cMetricTensor(cEvent E);
	~cMetricTensor();
};

