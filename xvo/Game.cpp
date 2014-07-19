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

	events.clear();

	sf::Event event;
	while (mainWindow.pollEvent(event)) {
		if (event.type == sf::Event::Closed) {
			gameState = GameState::Exiting;
			return;
		}
	}

	processMovementKeys();
}

void Game::processMovementKeys() {

	events.push_back(Event(EventType::MoveLeft));

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
		events.push_back(Event(EventType::MoveRight));
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
		events.push_back(Event(EventType::MoveLeft));
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
		events.push_back(Event(EventType::MoveUp));
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
		events.push_back(Event(EventType::MoveDown));
	}
}

void Game::update() {
	gameWorld.entities.target->Update(events);
}

void Game::render() {
	mainWindow.clear(sf::Color(255,255,255));

	for (Entity* entity : gameWorld.entities.store) {
		entity->Render(mainWindow);
	}

	mainWindow.display();
}