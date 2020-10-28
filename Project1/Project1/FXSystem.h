#pragma once

#include "Entity.h"
#include "Component.h"

class FXSystem
{
public:
	FXSystem() {};

	//Set
	void addEntity(Entity e) { entities.push_back(e); };

	//Update
	void update();

private:
	std::vector<Entity> entities;


};