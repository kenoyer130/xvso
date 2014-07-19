#ifndef GAME_H
#define GAME_H

#include <vector>

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>

#include "GameWorld.h"
#include "Event.h"

enum class GameState {
	Running,
	Exiting
};

class Game
{
public:

	vector<Event> events;

	GameState gameState;
	GameWorld gameWorld;

	sf::RenderWindow mainWindow;
	
	void Start();
private:
	void createGameWindow();
	void initGameWorld();
	void processInput();
	void processMovementKeys();
	void update();
	void render();
};
#endif