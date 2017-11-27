#pragma once
#include "GameObject.h"

class Player : public GameObject {
public:
	Player(sf::Texture& texture);
	~Player();

	void update(float deltaTime);
};

