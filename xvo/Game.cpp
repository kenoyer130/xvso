#include "Game.h"
#include "Soldier.h"
#include <memory>

#include <SFML/Window.hpp>

#include "XSoldierRenderer.h"

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

	XSoldierRenderer xSoldierRenderer;
	Soldier soldier(xSoldierRenderer);

	gameWorld.entities.push_back(std::make_shared<Soldier>(soldier));
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
	for (std::shared_ptr<Entity> entity : gameWorld.entities) {
		entity->Update();
	}
}

void Game::render() {
	mainWindow.clear();

	for (std::shared_ptr<Entity> entity : gameWorld.entities) {
		entity->Render(mainWindow);
	}

	mainWindow.display();
}