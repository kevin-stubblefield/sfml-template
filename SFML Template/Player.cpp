#include "Player.h"

Player::Player(sf::Texture* texture) : GameObject(texture) {
}


Player::~Player() {
}

void Player::update(float deltaTime) {
	body.move(sf::Vector2f(50.0f, 50.0f) * deltaTime);
}