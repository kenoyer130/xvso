#ifndef Entities_H
#define Entitiese_H

#include <memory.h>
#include <SFML/Graphics/RenderWindow.hpp>

#include "EntityRenderer.h"
#include "EntityState.h"
#include "Entity.h"
#include "Soldier.h"
#include "XSoldierRenderer.h"

class Entities
{

public:
	std::vector<Entity*> store;

	Entities() {
		store.push_back(&x);
		store.push_back(&y);
	}
	
private:

	XSoldierRenderer xSoldierRenderer;
	XSoldierRenderer ySoldierRenderer;

	Soldier x = Soldier(xSoldierRenderer);
	Soldier y = Soldier(ySoldierRenderer);
	
};
#endif