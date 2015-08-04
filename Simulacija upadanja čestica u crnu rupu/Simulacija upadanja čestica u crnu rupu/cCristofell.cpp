#include "stdafx.h"
#include "cCristofell.h"


c4Vector cCristofell::Cristofell(c4Vector A)
{
	c4Vector B;
	for (int i = 0; i < 4; i++)
	{
		B.x[i] = K[i].TProduct(A, A);
	}
	return B;

}

cCristofell::cCristofell(cEvent Event)
{
	cMetricTensor g(Event);
	cCMetricTensor G(Event);

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			for (int k = 0; k < 4; k++)
			{
				K[i][j][k] = ;
			}
	
}

cCristofell::~cCristofell()
{
}
