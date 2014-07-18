#ifndef TextureManager_H
#define TextureManager_H

#include <string.h>
#include <vector>
#include <SFML/Graphics/Texture.hpp>


class TextureManager {
public:
	sf::Texture get(std::string fileName);
private:
	std::vector<sf::Texture> textures;
};
#endif