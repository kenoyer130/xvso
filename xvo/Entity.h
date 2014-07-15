#ifndef Entity_H
#define Entity_H

#include <SFML/Graphics/RenderWindow.hpp>

#include "EntityRenderer.h"
#include "EntityState.h"

class Entity
{

public:

	EntityState entityState;

	void Render(sf::RenderWindow &window) {
		entityRenderer->Render(entityState, window);
	}

	virtual void Update() = 0;

protected:

	Entity(EntityRenderer &renderer) {
		entityRenderer = &renderer;
	}

private:
	EntityRenderer* entityRenderer;
};
#endif