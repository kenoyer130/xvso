#include "Game.h"
#include "Soldier.h"
#include <memory>

#include <SFML/Window.hpp>

void Game::Start() {
	gameState = GameState::Running;

	initGameWorld();
	createGameWindow();

	while (gameState == GameState::Running) {
		if (mainWindow.isOpen()) {
			processInput();
			update();
			render();
		}
	}

	mainWindow.close();
}

void Game::initGameWorld() {
	
}

void Game::createGameWindow() {	
	mainWindow.create(sf::VideoMode(1024, 768), "XvsO");
}
 
void Game::processInput() {

	sf::Event event;
	while (mainWindow.pollEvent(event)) {
		if (event.type == sf::Event::Closed) {
			gameState = GameState::Exiting;
			return;
		}
	}
}

void Game::update() {
	for (Entity* entity : gameWorld.entities.store) {
		entity->Update();
	}
}

void Game::render() {
	mainWindow.clear();

	for (Entity* entity : gameWorld.entities.store) {
		entity->Render(mainWindow);
	}

	mainWindow.display();
}