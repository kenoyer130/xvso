#ifndef Soldier_H
#define Soldier_H

#include "Entity.h"
#include "SFML\Graphics\Sprite.hpp"

class Soldier :  public Entity {

public:
	Soldier(ImageManager& imageManager, EntityState state, std::string id) : Entity(imageManager, state, id){

	};
	void Update(vector<Event>& events);
	
private:

};
#endif