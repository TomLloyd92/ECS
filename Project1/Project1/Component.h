#pragma once

#include "Globals.h"
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>


class Component
{
public:
	Component() {};

	void setId(int t_id) { ID = t_id; };
	int getID() { return ID; };

private:
	int ID = 0;


};