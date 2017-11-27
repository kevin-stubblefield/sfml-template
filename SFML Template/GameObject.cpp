#include "GameObject.h"

GameObject::GameObject(sf::Texture* texture) : texture(*texture) {
	body.setTexture(*texture);
}


GameObject::~GameObject() {
}

void GameObject::update(float deltaTime) {
}

void GameObject::draw(sf::RenderWindow& window) {
	window.draw(body);
}