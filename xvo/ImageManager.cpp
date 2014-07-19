#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>

#include "ImageManager.h"
#include "FileStream.h"

sf::Texture* ImageManager::get(std::string id) {

	sf::Texture* texture = new sf::Texture;

	errno = 0;
	FileStream stream;

	//todo: remove hardcoded path!
	if (!stream.open("C:\\projects\\xvo\\xvso\\xvo\\Debug\\" + id + ".png")) {
		printf("Error %d \n", errno);
	}

	texture->loadFromStream(stream);

	images[id] = texture;

	return texture;
}