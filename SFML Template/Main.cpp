#include <SFML\Graphics.hpp>
#include "Game.h"

int main() {
	sf::RenderWindow window(sf::VideoMode(512, 512), "SFML Template");
	sf::Clock clock;

	Game game;

	while (window.isOpen()) {
		float deltaTime = clock.restart().asSeconds();

		sf::Event event;
		while (window.pollEvent(event)) {
			switch (event.type) {
			case sf::Event::Closed:
				window.close();
				break;
			}
		}

		game.update(deltaTime);

		window.clear();
		game.draw(window);
		window.display();
	}
}