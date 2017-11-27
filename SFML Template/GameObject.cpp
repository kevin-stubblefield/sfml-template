#include "GameObject.h"

GameObject::GameObject(sf::Texture* texture) : texture(*texture) {
	body.setTexture(*texture);
}

GameObject::GameObject(sf::Texture* texture, std::string tag) : texture(*texture) {
	body.setTexture(*texture);
	this->tag = tag;
}

GameObject::~GameObject() {
}

void GameObject::update(float deltaTime) {
}

void GameObject::draw(sf::RenderWindow& window) {
	window.draw(body);
}