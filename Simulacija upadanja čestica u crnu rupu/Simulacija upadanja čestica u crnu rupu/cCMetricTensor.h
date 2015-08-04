#pragma once
#include "c4x4Matrix.h"
#include "cEvent.h"
#include "cBlackHole.h"

class cCMetricTensor :
	public c4x4Matrix
{
public:
	cCMetricTensor(cEvent E/*, cBlackHole BH*/);
	cCMetricTensor();
	~cCMetricTensor();
};

