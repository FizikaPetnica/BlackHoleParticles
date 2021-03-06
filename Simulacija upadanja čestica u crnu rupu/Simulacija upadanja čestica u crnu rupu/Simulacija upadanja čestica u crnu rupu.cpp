// Simulacija upadanja čestica u crnu rupu.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "cWorld.h"
#include "cEvent.h"
#include "cBlackHole.h"
#include "c2Tensor.h"
#include "cParticle.h"
#include "cGlobalVar.h"

#include <list>
#include <iostream>
#include <math.h>

//long double pw(long double a, int b) { long double x = 1; if (b >= 0) { for (int i = 0; i < b; i++) x *= a; } else { for (int i = 0; i < b; i++) x /= a; } return x; }

const long double G = 6.67384 / pow(10, 11);
const long double c = 299792458;
const long double Pi = 3.1415926535897932385;
const long double Eta0 = 8.85418781762 / pow(10, 12);
const long double dt = 0.00001;
const c2Tensor KronekerDelta(1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1);
const c2Tensor MinowskiMetirc(-c*c, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1);


c2Tensor CovariantMetric, ContravariantMetric, SEP, Einstein;
cBlackHole BH; //Declaration of Black Hole

//long double Rs;
//long double Rq;

/*void FillCovariantMetric(cEvent E)
{
	long double R = E.x[1] * E.x[1] + BH.Rotation*BH.Rotation*cos(E.x[2])*cos(E.x[2]);
	long double Triangle = E.x[1] * E.x[1] + BH.Rotation*BH.Rotation - 2 * BH.RestMass*E.x[1] + BH.Charge*BH.Charge;

	CovariantMetric.t[0][0] = 1 - (2 * BH.RestMass*E.x[1] - BH.Charge) / (R*R);
	CovariantMetric.t[0][1] = 1;
	CovariantMetric.t[0][2] = 0;
	CovariantMetric.t[0][3] = BH.Rotation*sin(E.x[2])*sin(E.x[2]) / (R*R) * (2 * BH.RestMass*E.x[1] - BH.Charge*BH.Charge);

	CovariantMetric.t[1][0] = 1;
	CovariantMetric.t[1][1] = 0;
	CovariantMetric.t[1][2] = 0;
	CovariantMetric.t[1][3] = -BH.Rotation*sin(E.x[2])*sin(E.x[2]);

	CovariantMetric.t[2][0] = 0;
	CovariantMetric.t[2][1] = 0;
	CovariantMetric.t[2][2] = -(R*R);
	CovariantMetric.t[2][3] = 0;

	CovariantMetric.t[3][0] = BH.Rotation*sin(E.x[2])*sin(E.x[2]) / (R*R) * (2 * BH.RestMass*E.x[1] - BH.Charge*BH.Charge);
	CovariantMetric.t[3][1] = -BH.Rotation*sin(E.x[2])*sin(E.x[2]);
	CovariantMetric.t[3][2] = 0;
	CovariantMetric.t[3][3] = sin(E.x[2])*sin(E.x[2]) / (R*R)*(Triangle*BH.Charge*BH.Charge*sin(E.x[2])*sin(E.x[2]) - pow(E.x[1] * E.x[1] + BH.Rotation*BH.Rotation, 2));
}*/

/*void FillContravariantMetric(cEvent E)
{
	long double R = E.x[1] * E.x[1] + BH.Rotation*BH.Rotation*cos(E.x[2])*cos(E.x[2]);
	long double Triangle = E.x[1] * E.x[1] + BH.Rotation*BH.Rotation - 2 * BH.RestMass*E.x[1] + BH.Charge*BH.Charge;

	ContravariantMetric.t[0][0] = -BH.Rotation*BH.Rotation*sin(E.x[2])*sin(E.x[2]) / (R*R);
	ContravariantMetric.t[0][1] = (E.x[1] * E.x[1] + BH.Rotation*BH.Rotation) / (R*R);
	ContravariantMetric.t[0][2] = 0;
	ContravariantMetric.t[0][3] = -BH.Rotation / (R*R);

	ContravariantMetric.t[1][0] = (E.x[1] * E.x[1] + BH.Rotation*BH.Rotation) / (R*R);
	ContravariantMetric.t[1][1] = -Triangle/(R*R);
	ContravariantMetric.t[1][2] = 0;
	ContravariantMetric.t[1][3] = BH.Rotation / (R*R);

	ContravariantMetric.t[2][0] = 0;
	ContravariantMetric.t[2][1] = 0;
	ContravariantMetric.t[2][2] = -1/(R*R);
	ContravariantMetric.t[2][3] = 0;

	ContravariantMetric.t[3][0] = -BH.Rotation / (R*R);
	ContravariantMetric.t[3][1] = BH.Rotation / (R*R);
	ContravariantMetric.t[3][2] = 0;
	ContravariantMetric.t[3][3] = -1 / pow(sin(E.x[2])*R, 2);
}*/

/*long double KN(long float dt, cParticle X)
{
	long double Alfa = BH.Rotation / (c*BH.RestMass);
	long double Ro2 = X.ParticleEvent.x[1] * X.ParticleEvent.x[1] + Alfa * Alfa * cos(X.ParticleEvent.x[2]) * cos(X.ParticleEvent.x[2]);
	Rs = 2 * BH.RestMass*G / (c*c);
	Rq = sqrt(pow(BH.Charge, 2)*G / (4 * Pi*Eta0*pow(c, 4)));
	long double Triangle = X.ParticleEvent.x[1] * X.ParticleEvent.x[1] - Rs*X.ParticleEvent.x[1] + Alfa*Alfa + Rq*Rq;


	long double dTau, ds2;

	ds2 = -(pow(X.ParticleVelocity.x[1] * dt, 2) / Triangle + pow(X.ParticleVelocity.x[2] * dt, 2))
		+ pow((c*dt - Alfa * pow(sin(X.ParticleEvent.x[2]), 2) * pow(X.ParticleVelocity.x[3] * dt, 2)), 2)*(Triangle / Ro2)
		- pow(((pow(X.ParticleEvent.x[1], 2) + pow(Alfa, 2))*pow(X.ParticleVelocity.x[3] * dt, 2) - Alfa*c*dt), 2)*(pow(sin(X.ParticleEvent.x[2]), 2) / Ro2);
	
	dTau = sqrt(ds2)/c;
	return ds2;
}*/



int main()
{
	std::cin >> BH.RestMass >> BH.Charge >> BH.Rotation; //Intilisation ob BH

	//std::list<cParticle> Particles;

	cParticle P;
	cParticle B;

	for (long double t = 0; t < 10; t+=dt)
	{
		P.Evolve(dt);
		B.Evolve(dt);
	}

	return 0;
}

