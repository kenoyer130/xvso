#ifndef EntitySprite_H
#define EntitySprite_H

#include <memory.h>
#include <string.h>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>

#include "EntityState.h"
#include "FileStream.h"

class EntitySprite
{

public:


protected:

	EntitySprite(sf::Texture *texture) {

		sprite(texture);
	}

private:
	sf::Texture texture;
	sf::Sprite sprite;
};
#endif