#include "Soldier.h"
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/CircleShape.hpp>
#include <iostream>

void Soldier::Update(vector<Event>& events) {
	for (Event e : events) {

		switch (e.eventType) {

		case EventType::MoveRight:
			this->state.x += 1;
			break;

		case EventType::MoveLeft:
			this->state.x -= 1;
			break;

		case EventType::MoveUp:
			this->state.y -= 1;
			break;

		case EventType::MoveDown:
			this->state.y += 1;
			break;
		}
	}
}