#pragma once
#include "Entity.h"
#include "Component.h"
#include "AIComponent.h"

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