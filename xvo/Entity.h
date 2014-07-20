#ifndef Entity_H
#define Entity_H

#include <memory.h>
#include <string.h>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>

#include "EntityState.h"
#include "FileStream.h"
#include "ImageManager.h"
#include "Event.h"

class Entity
{

public:
	void Render(sf::RenderWindow &window) {
		sprite.setPosition(state.x, state.y);
		window.draw(sprite);
	}

	virtual void Update(vector<Event>& events) = 0;

protected:

	EntityState state;

	Entity(ImageManager& imageManager, EntityState state, std::string id) {
		sprite.setTexture(*imageManager.get(id));
		this->state = state;
	}

	void checkBounds();

private:
	sf::Sprite sprite;
};
#endif