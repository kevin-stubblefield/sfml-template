#pragma once
#include <SFML\Graphics.hpp>

class GameObject {
public:
	GameObject(sf::Texture* texture);
	GameObject(sf::Texture* texture, std::string tag);
	~GameObject();

	virtual void update(float deltaTime);
	virtual void draw(sf::RenderWindow& window);

	std::string getTag() { return this->tag; }
	void setTag(std::string value) { this->tag = value; }

protected:
	sf::Sprite body;
	sf::Texture& texture;

	std::string tag;
};

