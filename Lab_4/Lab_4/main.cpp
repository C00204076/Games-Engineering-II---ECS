//
// C00204076
// Brandon Seah-Dempsey
// Statred at 11:00 22 October 2018
// Finished at
// Time taken:
// Known bugs:

//#include <SDL.h>

#include "Entity.h"

#include "HealthComponent.h"
#include "PositionComponent.h"
#include "ControlComponent.h"

#include "AISystem.h"
#include "ControlSystem.h"
#include "RenderSystem.h"

int main(void*)
{
	// Entities
	Entity player, alien, dog, cat;
	// Initialise Components
	HealthComponent hc = HealthComponent();
	PositionComponent pc = PositionComponent();
	ControlComponent cc = ControlComponent();
	// Initialise Systems
	AISystem as = AISystem();
	ControlSystem cs = ControlSystem();
	RenderSystem rs = RenderSystem();

	// Creating Player entity
	player = Entity();
	// Add Player components
	player.addComponent(hc);
	player.addComponent(pc);
	player.addComponent(cc);
	// Set Player name
	player.setName("Player");
	//
	cs.addEntity(player);
	rs.addEntity(player);

	// Creating Alien entity
	alien = Entity();
	// Add Alien components
	alien.addComponent(hc);
	alien.addComponent(pc);
	// Set Alien name
	alien.setName("Alien");
	//
	as.addEntity(alien);
	rs.addEntity(alien);

	// Creating Dog enitiy
	dog = Entity();
	// Add Dog components
	dog.addComponent(hc);
	dog.addComponent(pc);
	// Set Dog name
	dog.setName("Dog");
	//
	as.addEntity(dog);
	rs.addEntity(dog);

	// Creating Cat entity
	cat = Entity();
	// Add Cat components
	cat.addComponent(hc);
	cat.addComponent(pc);
	// Set Cat name
	cat.setName("Cat");
	//
	as.addEntity(cat);
	rs.addEntity(cat);

	//
	while (true)
	{
		as.update();
		cs.update();
		rs.update();
	}



	return 0;
}
