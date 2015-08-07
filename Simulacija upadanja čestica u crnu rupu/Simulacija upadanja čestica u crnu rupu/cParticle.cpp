#include "stdafx.h"
#include "cParticle.h"
#include <math.h>

const long double G = 6.67384 / pow(10, 11);
const long double c = 299792458;

void cParticle::Evolve(double dt)
{
	long double dTau = dt*sqrt(1 - (2 * G*RestMass / ParticleEvent.x[1]));
	//cCristofell Cristoffel(ParticleEvent);


	//c4Vector Cris = Cristoffel.Cristofell(ParticleVelocity);

	ParticleEvent.x[0] += dt;
	//ParticleEvent.x[1] += -sqrt(2 * RestMass*c*c / ParticleEvent.x[1])*(1 - 2 * RestMass / ParticleEvent.x[1])*dTau;
	ParticleEvent.x[1] += -sqrt(2 * RestMass*c*c / ParticleEvent.x[1]*(1 - 2 * RestMass)) / (ParticleEvent.x[1])*dTau;
	
}

/*float cParticle::Ds2()
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

}*/

cParticle::cParticle()
{
}


cParticle::~cParticle()
{
}
