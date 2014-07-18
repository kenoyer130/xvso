#ifndef Soldier_H
#define Soldier_H

#include "Entity.h"
#include "TextureManager.h"

class Soldier :  public Entity {

public:
	Soldier(TextureManager &textureManager, std::string fileName) : Entity(textureManager, fileName){
		EntityState state;
		entityState = state;
	};
	void Update();
	
private:

};
#endif