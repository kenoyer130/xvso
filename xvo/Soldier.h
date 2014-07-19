#ifndef Soldier_H
#define Soldier_H

#include "Entity.h"
#include "SFML\Graphics\Sprite.hpp"

class Soldier :  public Entity {

public:
	Soldier(ImageManager& imageManager, std::string id) : Entity(imageManager, id){
		EntityState state;
		entityState = state;
	};
	void Update();
	
private:

};
#endif