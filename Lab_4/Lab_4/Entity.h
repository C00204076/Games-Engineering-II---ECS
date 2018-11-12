//
// C00204076
// Brandon Seah-Dempsey
// Statred at 11:00 22 October 2018
// Finished at
// Time taken:
// Known bugs:

#ifndef ENTITY_H
#define ENTITY_H

#include "Component.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

//
class Entity
{
public:
	//
	Entity()
	{

	};

	//
	void addComponent(Component c)
	{
		components.push_back(c);
	}

	//
	void removeComponent(Component c)
	{
		/* TBI */
	}

	//
	vector<Component> getComponents()
	{
		return components;
	}

	//
	int getEntityId()
	{
		return id;
	}

	//
	void setName(string name)
	{
		m_componentName = name;
	}

	//
	string getName()
	{
		return m_componentName;
	}

private:
	vector<Component> components;
	int id;
	string m_componentName;
};

#endif // !ENTITY_H