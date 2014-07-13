#ifndef GameWorld_H
#define GameWorld_H
#include <vector>
#include <memory>

#include "Entity.h"

class GameWorld
{
public:
	std::vector<std::shared_ptr<Entity>> entities;
private:
	
};
#endif