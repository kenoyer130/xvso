#ifndef EntityState_H
#define EntityState_H

class EntityState
{

public:
	float x;
	float y;

	EntityState() {
		x = 0;
		y = 0;
	}

	EntityState(float x, float y) {
		this->x = x;
		this->y = y;
	}
};
#endif