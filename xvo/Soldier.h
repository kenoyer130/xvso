#ifndef Soldier_H
#define Soldier_H

#include "Entity.h"

class Soldier :  public Entity {

public:
	Soldier(std::string sprite) : Entity(sprite){
		EntityState state;
		entityState = state;
	};
	void Update();
	
private:

};
#endif