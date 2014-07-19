#ifndef ImageManager_H
#define ImageManager_H

#include <string.h>
#include <map>

#include "SFML\Graphics\Texture.hpp"

using namespace std;

class ImageManager {
public:
	sf::Texture* get(string id);
private:
	map<string, sf::Texture*> images;
};
#endif