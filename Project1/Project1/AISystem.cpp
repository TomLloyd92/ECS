#include "AISystem.h"

void AISystem::update()
{
	//auto iter = entities.begin();
	//auto endIter = entities.end();

	std::vector<Component> comps = entities.front().getComponents();

	for (auto it = begin(entities); it != end(entities); ++it) 
	{
		std::cout << it->getName() << " is " ;

		std::vector<Component> coms = it->getComponents();

		for (int i = 0; i < coms.size(); i++)
		{
			if (coms.at(i).getID() == comp::AI)
			{
				std::cout << "Updating AI" << std::endl;
			}
		}
	}
}
