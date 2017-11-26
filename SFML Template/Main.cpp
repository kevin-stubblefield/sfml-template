#include <SFML\Graphics.hpp>
#include "ResourceLoader.h"

int main() {
	sf::RenderWindow window(sf::VideoMode(512, 512), "SFML Template");
	sf::Clock clock;

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

		window.clear();
		window.display();
	}
}