#pragma once
#include <SFML\Graphics.hpp>
#include <iostream>
#include <array>
#include "Entity.h"
#include "Component.h"
#include "HealthComponent.h"
#include "HealthSystem.h"
#include "AIComponent.h"
#include "FXComponent.h"
#include "GamepadComponent.h"
#include "PhysicsComponent.h"
#include "AISystem.h"
#include "FXSystem.h"
#include "GamepadSystem.h"
#include "PhysicsSystem.h"

class GamePlay
{
public:
	GamePlay();
	~GamePlay();
	void update(sf::Time t_deltaTime);
	void render(sf::RenderWindow& t_window);
	void setup(sf::Font& t_font);
	void initialise();
private:
	//Font
	sf::Font m_font;

	//Entitys
	Entity player;
	Entity dog;
	Entity troll;
	Entity orc;
	Entity cat;
	Entity pig;

	//Components
	AIComponent AI;
	FXComponent FX;
	PhysicsComponent Physics;
	GamepadComponent GamePad;

	//Systems
	AISystem aiSystem;
	FXSystem fxSystem;
	PhysicsSystem physicsSystem;
	GamepadSystem gamepadSystem;

};