#pragma once
#include "Entity.h"


class HealthSystem
{
public:

	//Sets
	void addEntity(Entity e) { entities.push_back(e); };

	//Updates
	void update();

private:
	std::vector<Entity> entities;

};