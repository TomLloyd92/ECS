#pragma once
#include "Entity.h"

class AISystem
{
public:
	AISystem() {};

	//Set
	void addEntity(Entity e) { entities.push_back(e); };

	//Update
	void update();

private:
	std::vector<Entity> entities;


};