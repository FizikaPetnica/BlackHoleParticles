#include "stdafx.h"
#include "cCristofell.h"
#include <math.h>
#include "cBlackHole.h"


//extern double G;
//extern cBlackHole BH;





//c4Vector cCristofell::Cristofell(c4Vector A)
//{
//	c4Vector B;
//	for (int i = 0; i < 4; i++)
//	{
//		B.x[i] = K[i].TProduct(A, A);
//	}
//	return B;
//
//} 

cCristofell::cCristofell(cEvent Event)
{
	/*cMetricTensor g(Event);
	cCMetricTensor G(Event);

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			for (int k = 0; k < 4; k++)
			{
				K[i][j][k] = ;
			}*/

	/*float RS = (1 - (2 * G*BH.RestMass) / (Event.x[1]));

	K[0].t[0][0] = 0;
	K[0].t[0][0] = G*BH.RestMass/Event.x[1]/RS;
	K[0].t[0][0] = 0;
	K[0].t[0][0] = 0;

	K[0].t[0][1] = G*BH.RestMass / Event.x[1] / RS;
	K[0].t[1][1] = 0;
	K[0].t[2][1] = 0;
	K[0].t[3][1] = 0;

	K[0].t[0][2] = 0;
	K[0].t[1][2] = 0;
	K[0].t[2][2] = 0;
	K[0].t[3][2] = 0;

	K[0].t[0][3] = 0;
	K[0].t[1][3] = 0;
	K[0].t[2][3] = 0;
	K[0].t[3][3] = 0;


	K[1].t[0][0] = ;
	K[1].t[0][0] = ;
	K[1].t[0][0] = ;
	K[1].t[0][0] = ;

	K[1].t[0][0] = ;
	K[1].t[0][0] = ;
	K[1].t[0][0] = ;
	K[1].t[0][0] = ;

	K[1].t[0][0] = ;
	K[1].t[0][0] = ;
	K[1].t[0][0] = ;
	K[1].t[0][0] = ;

	K[2].t[0][0] = ;
	K[2].t[0][0] = ;
	K[2].t[0][0] = ;
	K[2].t[0][0] = ;



	K[3].t[0][0] = 0;
	K[3].t[0][0] = 0;
	K[3].t[0][0] = 0;
	K[3].t[0][0] = 0;

	K[3].t[0][0] = 0;
	K[3].t[0][0] = 0;
	K[3].t[0][0] = 0;
	K[3].t[0][0] = 0;

	K[3].t[0][0] = 0;
	K[3].t[0][0] = 0;
	K[3].t[0][0] = 0;
	K[3].t[0][0] = 0;

	K[3].t[0][0] = 0;
	K[3].t[0][0] = 0;
	K[3].t[0][0] = 0;
	K[3].t[0][0] = 0;



	K[4].t[0][0] = 0;
	K[4].t[1][0] = 0;
	K[4].t[2][0] = 0;
	K[4].t[3][0] = 0;

	K[4].t[0][1] = 0;
	K[4].t[1][1] = 0;
	K[4].t[2][1] = 0;
	K[4].t[3][1] = 1/Event.x[1];

	K[4].t[0][2] = 0;
	K[4].t[1][2] = 0;
	K[4].t[2][2] = 0;
	K[4].t[3][2] = ctg(Event.x[2]);

	K[4].t[0][3] = 0;
	K[4].t[1][3] = 1 / Event.x[1];
	K[4].t[2][3] = ctg(Event.x[2]);
	K[4].t[3][3] = 0;*/
}

cCristofell::~cCristofell()
{
}
