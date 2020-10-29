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
			//Cast to Gamepad Component
			GamepadComponent* gc = (GamepadComponent*)*GamePadComponentIter;

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
			{
				//Move the Y position Up
				gc->setPos(sf::Vector2f(gc->getPos().x, gc->getPos().y + 1));
				std::cout << it->getName() << " Position ";
				std::cout << "X:" << gc->getPos().x << " Y:" << gc->getPos().y << std::endl;
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
			{
				//Move the x position left
				gc->setPos(sf::Vector2f(gc->getPos().x - 1, gc->getPos().y));
				std::cout << it->getName() << " Position ";
				std::cout << "X:" << gc->getPos().x << " Y:" << gc->getPos().y << std::endl;
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
			{
				//Move the x position Right
				gc->setPos(sf::Vector2f(gc->getPos().x + 1, gc->getPos().y));
				std::cout << it->getName() << " Position ";
				std::cout << "X:" << gc->getPos().x << " Y:" << gc->getPos().y << std::endl;
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
			{
				//Move the Y position Down
				gc->setPos(sf::Vector2f(gc->getPos().x, gc->getPos().y - 1));
				std::cout << it->getName() << " Position ";
				std::cout << "X:" << gc->getPos().x << " Y:" << gc->getPos().y << std::endl;
			}
		}
	}
}
