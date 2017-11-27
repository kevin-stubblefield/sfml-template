#include "Game.h"
#include "Player.h"
#include <iostream>

Game::Game() {
	Player* player = new Player(Engine::ResourceLoader::getInstance()->getTextureByName("player.png"));
	objects.push_back(player);
}

Game::~Game() {
}

void Game::update(float deltaTime) {
	for (int i = 0; i < objects.size(); i++) {
		objects[i]->update(deltaTime);
		std::cout << objects[i]->getTag() << std::endl;
	}
}

void Game::draw(sf::RenderWindow& window) {
	for (int i = 0; i < objects.size(); i++) {
		objects[i]->draw(window);
	}
}
