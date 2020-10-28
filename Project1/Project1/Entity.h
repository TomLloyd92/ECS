#pragma once
#include "Component.h"
#include <vector>

class Entity
{

public:
	Entity() { };
	~Entity() {};

	//Sets
	void setName(std::string t_name) { name = t_name; };
	void addComponent(Component c) { components.push_back(c); };
	void removeComponent(Component c) {};

	//Gets
	std::vector<Component> getComponents() { return components; };
	std::string getName() { return name; };


private:
	std::vector<Component> components;

	std::string name;

};