#include "stdafx.h"
#include "cParticle.h"
#include <math.h>


void cParticle::Evolve(double dt)
{
	long double dTau = dt*ParticleVelocity.Gamma();
	cCristofell Cristoffel(ParticleEvent);
	ParcticleAcceleration();


	c4Vector Cris = Cristoffel.Cristofell(ParticleVelocity);


	for (int i = 0; i < 4; i++)
		ParticleEvent.x[i] += ParticleVelocity.x[i] * dTau + (ParcticleAcceleration.x[i] - Cris.x[i]) * dTau*dTau;
	
}

float cParticle::Ds2()
{
	extern cBlackHole BH;
	extern double c;
	extern double G; 
	extern double Eta0;
	extern double Pi;

	double Rs = 2 * BH.RestMass*G / pow(c, 2);
	double Rq2 = (G*pow(BH.Charge, 2)) / (4 * Pi*Eta0*pow(c, 4));
	double Alfa = BH.Rotation / (BH.RestMass*c);
	double Ro2 = pow(ParticleEvent.x[1], 2) + pow(Alfa*cos(ParticleEvent.x[2]), 2);
	double Triangle = pow(ParticleEvent.x[1], 2) + Rs*ParticleEvent.x[1] + pow(Alfa, 2) + Rq2;


	return 

}

cParticle::cParticle()
{
}


cParticle::~cParticle()
{
}
