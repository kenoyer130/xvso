#include "Soldier.h"
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/CircleShape.hpp>
#include <iostream>

void Soldier::Update() {

}

void Soldier::Render(sf::RenderWindow &window) {
	sf::CircleShape  icon;
	icon.setRadius(100);
	icon.setPosition(x, y);
	icon.setFillColor(sf::Color::Red);

	window.draw(icon);
}