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


		//Lamda to find the AI component
		auto comp_match_find = [](Component com)
		{
			return com.getID() == comp::AI;
		};
		auto AIComponentIter =  std::find_if(begin(coms), end(coms), comp_match_find);
		if (AIComponentIter == end(coms))
		{
			//Return Error if it is not found
			std::cout << "NOT UPDATING AI AS IT HAS NO AI COMPONENT" << std::endl;
		}
		else
		{
			//Output updating
			std::cout << "Updating AI" << std::endl;
		}
	}
}
