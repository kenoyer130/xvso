#ifndef XSoldierRenderer_H
#define XSoldierRenderer_H

#include "EntityRenderer.h" 

class XSoldierRenderer : public EntityRenderer
{
public:
	virtual void Render(const EntityState& state, sf::RenderWindow &window);
private:


};
#endif