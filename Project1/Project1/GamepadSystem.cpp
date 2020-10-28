#include "GamepadSystem.h"

void GamepadSystem::update()
{
	std::vector<Component> comps = entities.front().getComponents();

	for (auto it = begin(entities); it != end(entities); ++it)
	{
		std::vector<Component> coms = it->getComponents();

		std::cout << it->getName() << " is ";

		//Lamda to find the GamePad component
		auto comp_match_find = [](Component com)
		{
			return com.getID() == comp::GamePad;
		};
		auto AIComponentIter = std::find_if(begin(coms), end(coms), comp_match_find);
		if (AIComponentIter == end(coms))
		{
			//Return Error if it is not found
			std::cout << "NOT UPDATING GAMEPAD AS IT HAS NO GAMEPAD COMPONENT" << std::endl;
		}
		else
		{
			//Output updating
			std::cout << "Updating GAMEPAD" << std::endl;
		}
	}
}
