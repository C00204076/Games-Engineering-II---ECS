//
// C00204076
// Brandon Seah-Dempsey
// Statred at 11:26 22 October 2018
// Finished at
// Time taken:
// Known bugs:

#ifndef CONTROLCOMPONENT_H
#define CONTROLCOMPONENT_H

#include "Component.h"
#include "Entity.h"
#include "ControlComponent.h"

#include <iostream>
#include <vector>

using namespace std;

//
class ControlComponent : public Component
{
public:
	//
	ControlComponent()
	{

	}

	//
	~ControlComponent()
	{

	}

	/* Data Only */


private:
	bool m_output;
	std::vector<Entity> m_entities;

};

#endif // !
