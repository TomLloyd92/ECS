#include "GamepadSystem.h"

void GamepadSystem::update()
{
	std::vector<Component> comps = entities.front().getComponents();

	for (auto it = begin(entities); it != end(entities); ++it)
	{
		std::vector<Component> coms = it->getComponents();

		std::cout << it->getName() << " is ";

		for (int i = 0; i < coms.size(); i++)
		{
			if (coms.at(i).getID() == comp::GamePad)
			{
				std::cout << "Updating Gamepad" << std::endl;
			}
		}
	}
}
