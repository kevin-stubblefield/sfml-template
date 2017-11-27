#include "Game.h"
#include "Player.h"

Game::Game() {
	Engine::ResourceLoader::init();
	sf::Texture playerTexture = Engine::ResourceLoader::getTextureByName("player.png");
	Player* player = new Player(playerTexture);
	objects.push_back(player);
}

Game::~Game() {
}

void Game::update(float deltaTime) {
	for (int i = 0; i < objects.size(); i++) {
		objects[i]->update(deltaTime);
	}
}

void Game::draw(sf::RenderWindow& window) {
	for (int i = 0; i < objects.size(); i++) {
		objects[i]->draw(window);
	}
}
