#ifndef Entity_H
#define Entity_H

#include <memory.h>
#include <string.h>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>

#include "EntityRenderer.h"
#include "EntityState.h"
#include "FileStream.h"
#include <errno.h>

class Entity
{

public:

	EntityState entityState;

	void Render(sf::RenderWindow &window) {
		window.draw(sprite);
	}

	virtual void Update() = 0;

protected:

	Entity(std::string filename) {

		errno = 0;
		FileStream stream;

		//todo: remove hardcoded path!
		if (!stream.open("C:\\projects\\xvo\\Debug\\" + filename + ".png")) {
			printf("Error %d \n", errno);
		}

		texture.loadFromStream(stream);
		
		sprite.setTexture(texture);
	}

private:
	sf::Sprite sprite;
	sf::Texture texture;
};
#endif