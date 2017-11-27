#pragma once
#include <SFML\Graphics.hpp>

class GameObject {
public:
	GameObject(sf::Texture& texture);
	~GameObject();

	virtual void update(float deltaTime);
	virtual void draw(sf::RenderWindow& window);

protected:
	sf::Sprite body;
	sf::Texture& texture;
};

