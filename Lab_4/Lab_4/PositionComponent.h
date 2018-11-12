//
// C00204076
// Brandon Seah-Dempsey
// Statred at 11:26 22 October 2018
// Finished at
// Time taken:
// Known bugs:

#ifndef POSITIONCOMPONENT_H
#define POSITIONCOMPONENT_H

#include "Component.h"
#include "Entity.h"
#include "ControlSystem.h"
#include "RenderSystem.h"
#include "AISystem.h"

#include <iostream>
#include <vector>

using namespace std;

//
class PositionComponent : public Component
{
public:
	//
	PositionComponent() : position(5)
	{

	}

	//
	~PositionComponent()
	{

	}

	/* Data Only */

	//
	int getPosition()
	{
		return position;
	}

	//
	void setPosition(int position)
	{
		this->position = position;
	}

private:
	int position;

};

#endif // !POSITIONCOMPONENT_H