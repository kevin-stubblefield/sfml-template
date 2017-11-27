#pragma once
#include <SFML\Graphics.hpp>
#include <vector>

#include "ResourceLoader.h"
#include "GameObject.h"

class Game {
public:
	Game();
	~Game();

	void update(float deltaTime);
	void draw(sf::RenderWindow& window);

private:
	std::vector<GameObject*> objects;
};

