//
// C00204076
// Brandon Seah-Dempsey
// Statred at 11:26 22 October 2018
// Finished at
// Time taken:
// Known bugs:

#ifndef CONTROLSYSTEM_H
#define CONTROLSYSTEM_H

#include "Component.h"
#include "Entity.h"

#include <iostream>
#include <vector>

using namespace std;

//
class ControlSystem
{
public:
	//
	ControlSystem() :
		output(false)
	{

	}

	//
	~ControlSystem()
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
			cout << "ControlSystem Update" << endl;

			for (auto entity : entities)
			{
				cout << "Updating Control System of: " << entity.getName() << endl;
			}

			output = true;
		}
	}

private:
	vector<Entity> entities;
	bool output;
};

#endif // !CONTROLSYSTEM_H
