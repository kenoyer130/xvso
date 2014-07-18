#ifndef Entities_H
#define Entitiese_H

#include <memory.h>
#include <SFML/Graphics/RenderWindow.hpp>

#include "EntityState.h"
#include "Entity.h"
#include "Soldier.h"
#include "TextureManager.h"

class Entities
{

public:
	std::vector<Entity*> store;
	TextureManager textureManager;

	Entities() {
		store.push_back(&x);
		store.push_back(&o);
	}
	
private:
	Soldier x = Soldier(textureManager, "x");
	Soldier o = Soldier(textureManager, "o");
	
};
#endif