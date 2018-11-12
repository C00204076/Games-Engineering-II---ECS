//
// C00204076
// Brandon Seah-Dempsey
// Statred at 11:20 22 October 2018
// Finished at
// Time taken:
// Known bugs:

#ifndef HEALTHCOMPONENT_H
#define HEALTHCOMPONENT_H

#include "Component.h"
#include "AISystem.h"

#include <iostream>
#include <vector>

using namespace std;

//
class HealthComponent : public Component
{
public:
	//
	HealthComponent() : m_health(100)
	{

	}

	~HealthComponent()
	{

	}

	/* Data Only */

	//
	int getHealth()
	{
		return m_health;
	}

	//
	void setHealth(int health)
	{
		this->m_health = health;
	}

	//

private:
	int m_health;

};

#endif // !HEALTHCOMPONENT_H