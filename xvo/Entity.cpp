#include "Entity.h"

void Entity::checkBounds() {
	if (this->state.x < 0) {
		this->state.x = 0;
	}

	if (this->state.x > 1024-32) {
		this->state.x = 1024-32;
	}

	if (this->state.y < 0) {
		this->state.y = 0;
	}

	if (this->state.y > 770 -32) {
		this->state.y = 770 - 32;
	}
}