#include "GamepadSystem.h"

void GamepadSystem::update()
{
	std::vector<Component*> comps = entities.front().getComponents();

	for (auto it = begin(entities); it != end(entities); ++it)
	{
		std::vector<Component*> coms = it->getComponents();

		//Lamda to find the GamePad component
		auto comp_match_find = [](Component *com)
		{
			return com->getID() == comp::GamePad;
		};
		auto GamePadComponentIter = std::find_if(begin(coms), end(coms), comp_match_find);
		if (GamePadComponentIter == end(coms))
		{
			std::cout << it->getName() << " is ";
			//Return Error if it is not found
			std::cout << "NOT UPDATING GAMEPAD AS IT HAS NO GAMEPAD COMPONENT" << std::endl;
		}
		else
		{
			//Use dynamic cast to cast to GamepadComponent 
			//dynamic_cast <GamepadComponent*> (GamePadComponentIter);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
			{
				std::cout << it->getName() << " is ";

				std::cout << "Jumping" << std::endl;
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
			{
				std::cout << it->getName() << " is ";
				std::cout << "Moving Left" << std::endl;
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
			{
				std::cout << it->getName() << " is ";
				std::cout << "Moving Right" << std::endl;
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
			{
				std::cout << it->getName() << " is ";
				std::cout << "Crouching" << std::endl;
			}
		}
	}
}
