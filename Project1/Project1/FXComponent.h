#pragma once
#include "Component.h"

class FXComponent : public Component
{
public:
	FXComponent() { setId(comp::FX); };

	//Set Target
	void setParticleEffect(bool t_particleOn) { this->particleOn = t_particleOn; };
	//Get Target
	bool getTargetPos() { return particleOn; };

private:
	bool particleOn = false;
};