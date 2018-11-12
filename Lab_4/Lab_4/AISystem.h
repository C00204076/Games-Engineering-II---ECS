//
// C00204076
// Brandon Seah-Dempsey
// Statred at 11:26 22 October 2018
// Finished at
// Time taken:
// Known bugs:

#ifndef AIYSTEM_H
#define AIYSTEM_H

#include "Component.h"
#include "Entity.h"

#include <iostream>
#include <vector>

using namespace std;

//
class AISystem
{
public:
	//
	AISystem() : 
		output(false)
	{

	}

	~AISystem()
	{

	}

	//
	void addEntity(Entity e)
	{
		entities.push_back(e);
	}

	//
	void update()
	{
		//
		if (output == false)
		{
			cout << "AISystem Update" << endl;

			for (auto entity : entities)
			{
				cout << "Updating AI System of: " << entity.getName() << endl;
			}

			output = true;
		}
	}

private:
	vector<Entity> entities;
	bool output;

};
#endif // !AISYSTEM_H