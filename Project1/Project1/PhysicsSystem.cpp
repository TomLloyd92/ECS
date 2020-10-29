#include "PhysicsSystem.h"

void PhysicsSystem::update()
{
	std::vector<Component*> comps = entities.front().getComponents();

	for (auto it = begin(entities); it != end(entities); ++it)
	{
		std::vector<Component*> coms = it->getComponents();

		std::cout << it->getName() << " is ";

		//Lamda to find the GamePad component
		auto comp_match_find = [](Component *com)
		{
			return com->getID() == comp::Physics;
		};
		auto PhysicsComponentIter = std::find_if(begin(coms), end(coms), comp_match_find);
		if (PhysicsComponentIter == end(coms))
		{
			//Return Error if it is not found
			std::cout << "NOT UPDATING PHYSICS AS IT HAS NO PHYSICS COMPONENT" << std::endl;
		}
		else
		{
			//Output updating
			std::cout << "Updating PHYSICS" << std::endl;
		}
	}
}
