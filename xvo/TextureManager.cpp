#include "TextureManager.h"
#include "FileStream.h"

sf::Texture TextureManager::get(std::string fileName) {

	sf::Texture texture;

	errno = 0;
	FileStream stream;

	//todo: remove hardcoded path!
	if (!stream.open("C:\\projects\\xvo\\xvso\\xvo\\Debug\\" + fileName + ".png")) {
		printf("Error %d \n", errno);
	}

	texture.loadFromStream(stream);

	textures.push_back(texture);

	return texture;
}