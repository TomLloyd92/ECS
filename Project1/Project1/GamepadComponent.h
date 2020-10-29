#pragma once
#include "Component.h"

class GamepadComponent : public Component
{
public:
	GamepadComponent() { setId(comp::GamePad); };

	//Gets
	sf::Vector2f getPos(){ return pos; };

	//Sets
	void setPos(sf::Vector2f t_pos) { pos = t_pos; };

private:
	sf::Vector2f pos{ 0,0 };

};