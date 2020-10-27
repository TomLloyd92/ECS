#pragma once
#include "Component.h"

class HealthComponent : public Component
{
public:
	HealthComponent() : health(100) {};

	//Sets
	int setHealth(int t_health) { this->health = t_health; };
	
	//Gets
	int getHealth() { return health; };


private:
	int health;

};