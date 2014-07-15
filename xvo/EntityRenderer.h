#ifndef EntityRenderer_H
#define EntityRenderer_H

#include <SFML/Graphics/RenderWindow.hpp>

#include "EntityState.h"

class EntityRenderer
{
public:
	virtual void Render(const EntityState &entityState, sf::RenderWindow &window) = 0;
private:

};
#endif