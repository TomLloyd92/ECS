#pragma once
#include "Component.h"
#include <SFML/Graphics.hpp>


class AIComponent : public Component
{
public:
	AIComponent() { setId(comp::AI); };

	//Set Target
	void setTargetPos(sf::Vector2f t_targetPos) { this->targetPos = targetPos; };
	//Get Target
	sf::Vector2f getTargetPos() { return targetPos; };

private:
	sf::Vector2f targetPos{ 0,0 };
};