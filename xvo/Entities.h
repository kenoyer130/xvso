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

	Entities() {
		store.push_back(&x);
		store.push_back(&y);
	}

private:
	ImageManager imageManager;
	Soldier x = Soldier(imageManager, "x");
	Soldier y = Soldier(imageManager, "x");
};
#endif