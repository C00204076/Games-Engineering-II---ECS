//
// C00204076
// Brandon Seah-Dempsey
// Statred at 11:26 22 October 2018
// Finished at
// Time taken:
// Known bugs:

#ifndef RENDERSYSTEM_H
#define RENDERSYSTEM_H

#include "Component.h"
#include "Entity.h"

#include <iostream>
#include <vector>

using namespace std;

//
class RenderSystem
{
public:
	//
	RenderSystem() : 
		output(false)
	{

	}

	//
	~RenderSystem()
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
			cout << "RenderSystem Update" << endl;

			for (auto entity : entities)
			{
				cout << "Updating Render System of: " << entity.getName() << endl;
			}

			output = true;
		}
	}

private:
	vector<Entity> entities;
	bool output;
};

#endif // !RENDERSYSTEM_H
