#pragma once
#include <SFML\Graphics.hpp>
class GameObject : public sf::Sprite {
public:
	GameObject();
	~GameObject();

	virtual void update(float deltaTime);
};

