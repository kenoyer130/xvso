#ifndef Entity_H
#define Entity_H

#include <memory.h>
#include <string.h>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Sprite.hpp>

#include "EntityState.h"
#include "FileStream.h"
#include "TextureManager.h"

class Entity
{

public:

	EntityState entityState;

	void Render(sf::RenderWindow &window) {
		window.draw(sprite);
	}

	virtual void Update() = 0;

protected:

	Entity(TextureManager &textureManager, std::string filename) {
		sprite.setTexture(textureManager.get(filename));
	}

private:
	sf::Sprite sprite;
};
#endif