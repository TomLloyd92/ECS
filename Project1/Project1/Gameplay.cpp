#include "Gameplay.h"


GamePlay::GamePlay()
{

	//Add Player components
	player.setName("Player");
	player.addComponent(Physics);
	player.addComponent(FX);
	player.addComponent(GamePad);
	player.addComponent(AI);
	//Assign player Entity to systems
	aiSystem.addEntity(player);
	fxSystem.addEntity(player);
	gamepadSystem.addEntity(player);
	physicsSystem.addEntity(player);


	//Add Dog components
	dog.setName("Dog");
	dog.addComponent(AI);
	dog.addComponent(Physics);
	dog.addComponent(FX);
	//Assign Dog Entity to systems
	physicsSystem.addEntity(dog);
	aiSystem.addEntity(dog);
	fxSystem.addEntity(dog);


	/*
	//Troll
	troll.addComponent(AI);
	troll.addComponent(FX);
	//Orc
	orc.addComponent(AI);
	orc.addComponent(Physics);
	//Cat
	cat.addComponent(AI);
	cat.addComponent(Physics);
	//Pig
	*/
	
	//pig.addComponent(AI);
	//aiSystem.addEntity(pig);

	//Assigning Entitys to systems
	//Physics
	/*
	physicsSystem.addEntity(orc);
	physicsSystem.addEntity(cat);
	//AI
	aiSystem.addEntity(troll);
	aiSystem.addEntity(orc);
	aiSystem.addEntity(cat);
	//Fx
	fxSystem.addEntity(troll);
	//Gamepad

	*/
}

GamePlay::~GamePlay()
{
}

void GamePlay::update(sf::Time t_deltaTime)
{
	aiSystem.update();
	fxSystem.update();
	gamepadSystem.update();
	physicsSystem.update();
}

void GamePlay::render(sf::RenderWindow& t_window)
{
}

void GamePlay::setup(sf::Font& t_font)
{


}

void GamePlay::initialise()
{
}