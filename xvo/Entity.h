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

class Entity
{

public:

	EntityState entityState;

	void Render(sf::RenderWindow &window) {
		window.draw(sprite);
	}

	virtual void Update() = 0;

protected:

	Entity(ImageManager& imageManager, std::string id) {
		sprite.setTexture(*imageManager.get(id));
	}

private:
	sf::Sprite sprite;
};
#endif