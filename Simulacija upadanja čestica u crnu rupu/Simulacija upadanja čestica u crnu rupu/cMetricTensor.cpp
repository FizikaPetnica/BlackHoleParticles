#include "stdafx.h"
#include "cMetricTensor.h"
#include <math.h>

cMetricTensor::cMetricTensor(cEvent E)
{
	extern cBlackHole BH;
	long double R = E.x[1] * E.x[1] + BH.Rotation*BH.Rotation*cos(E.x[2])*cos(E.x[2]);
	long double Triangle = E.x[1] * E.x[1] + BH.Rotation*BH.Rotation - 2 * BH.RestMass*E.x[1] + BH.Charge*BH.Charge;

	t[0][0] = 1 - (2 * BH.RestMass*E.x[1] - BH.Charge) / (R*R);
	t[0][1] = 1;
	t[0][2] = 0;
	t[0][3] = BH.Rotation*sin(E.x[2])*sin(E.x[2]) / (R*R) * (2 * BH.RestMass*E.x[1] - BH.Charge*BH.Charge);

	t[1][0] = 1;
	t[1][1] = 0;
	t[1][2] = 0;
	t[1][3] = -BH.Rotation*sin(E.x[2])*sin(E.x[2]);

	t[2][0] = 0;
	t[2][1] = 0;
	t[2][2] = -(R*R);
	t[2][3] = 0;

	t[3][0] = BH.Rotation*sin(E.x[2])*sin(E.x[2]) / (R*R) * (2 * BH.RestMass*E.x[1] - BH.Charge*BH.Charge);
	t[3][1] = -BH.Rotation*sin(E.x[2])*sin(E.x[2]);
	t[3][2] = 0;
	t[3][3] = sin(E.x[2])*sin(E.x[2]) / (R*R)*(Triangle*BH.Charge*BH.Charge*sin(E.x[2])*sin(E.x[2]) - pow(E.x[1] * E.x[1] + BH.Rotation*BH.Rotation, 2));
}

cMetricTensor::~cMetricTensor()
{
}
