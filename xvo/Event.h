#ifndef Event_H
#define Event_H

enum EventType {
	None,
	MoveLeft,
	MoveDown,
	MoveRight,
	MoveUp
};

class Event {

public:

	EventType eventType;

	Event(EventType eventType) {
		this->eventType = eventType;
	}
};

#endif