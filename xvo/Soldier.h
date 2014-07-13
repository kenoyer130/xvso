#ifndef Soldier_H
#define Soldier_H

#include "Entity.h"

class Soldier :  public Entity {

public:
	virtual void Update();
	virtual void Render(sf::RenderWindow &window);
private:

};
#endif