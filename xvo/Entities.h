#ifndef Entities_H
#define Entitiese_H

#include <memory.h>
#include <SFML/Graphics/RenderWindow.hpp>

#include "EntityState.h"
#include "Entity.h"
#include "Soldier.h"

class Entities
{

public:
	std::vector<Entity*> store;
	Entity* target;

	Entities() {

		EntityState xState(10, 50);
		EntityState yState(100, 100);

		Soldier* x = new Soldier(imageManager, xState, "x");
		Soldier* o = new Soldier(imageManager, yState, "o");

		store.push_back(x);
		store.push_back(o);

		target = x;
	}

private:
	ImageManager imageManager;
};
#endif