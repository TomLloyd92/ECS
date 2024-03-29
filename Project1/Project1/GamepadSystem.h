#pragma once
#include "Entity.h"
#include "GamepadComponent.h"

class GamepadSystem
{
public:
	GamepadSystem() {};

	//Set
	void addEntity(Entity e) { entities.push_back(e); };

	//Update
	void update();

private:
	std::vector<Entity> entities;

};