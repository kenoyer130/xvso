#ifndef Soldier_H
#define Soldier_H

#include "Entity.h"

class Soldier :  public Entity {

public:
	Soldier(EntityRenderer& renderer) : Entity(renderer){
		EntityState state;
		entityState = state;
	};
	void Update();
	
private:

};
#endif