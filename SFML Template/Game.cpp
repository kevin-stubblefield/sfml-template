#include "Game.h"

Game::Game() {
}

Game::~Game() {
}

void Game::update(float deltaTime) {
	for (int i = 0; i < objects.size(); i++) {
		objects[i].update(deltaTime);
	}
}

void Game::draw(sf::RenderWindow & window) {
	for (int i = 0; i < objects.size(); i++) {
		window.draw(objects[i]);
	}
}
