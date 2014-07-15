#include "XSoldierRenderer.h"
#include <SFML/Graphics/CircleShape.hpp>

void XSoldierRenderer::Render(const EntityState& state, sf::RenderWindow &window) {
	sf::CircleShape  icon;
	icon.setRadius(100);
	icon.setPosition(state.x, state.y);
	icon.setFillColor(sf::Color::Red);

	window.draw(icon);
}