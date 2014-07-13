#ifndef Entity_H
#define Entity_H

#include <SFML/Graphics/RenderWindow.hpp>

class Entity
{
public:
	float x;
	float y;

	virtual void Update() = 0;
	virtual void Render(sf::RenderWindow &window) = 0;
	
private:
	
};
#endif