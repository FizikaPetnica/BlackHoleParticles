#pragma once

#include "cEvent.h"
#include "cVelocity.h"
#include "cImpulse.h"
#include "cAcceleration.h"
#include "cCristofell.h"

class cParticle
{
public:
	float RestMass;
	cEvent ParticleEvent;
	cVelocity ParticleVelocity;
	cImpulse ParticleImpulse;
	cAcceleration ParcticleAcceleration;
	

	//float WL(cVelocity ParticleVelocity) const {}
	void Evolve(double dt);

	float Ds2();
	
	cParticle();
	~cParticle();
};

