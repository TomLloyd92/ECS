#include "FXSystem.h"

void FXSystem::update()
{
	std::vector<Component> comps = entities.front().getComponents();

	for (auto it = begin(entities); it != end(entities); ++it)
	{
		std::vector<Component> coms = it->getComponents();

		std::cout << it->getName() << " is ";

		for (int i = 0; i < coms.size(); i++)
		{
			if (coms.at(i).getID() == comp::FX)
			{
				std::cout << "Updating FxSystem" << std::endl;
			}
		}
	}
}
