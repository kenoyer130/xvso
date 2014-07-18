#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics/RenderWindow.hpp>
#include "GameWorld.h"

enum class GameState {
	Running,
	Exiting
};

class Game
{
public:
	GameState gameState;
	GameWorld gameWorld;

	TextureManager textureManager;

	sf::RenderWindow mainWindow;
	
	void Start();
private:
	void processInput();
	void update();
	void render();
	void initGameWorld();
	void createGameWindow();
};
#endif