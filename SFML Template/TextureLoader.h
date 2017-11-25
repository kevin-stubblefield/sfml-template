#pragma once
#include <SFML\Graphics.hpp>
#include <iostream>
#include <unordered_map>

class TextureLoader {
public:
	static sf::Texture getTextureByName(std::string name);

private:
	static std::unordered_map<std::string, sf::Texture> textures;

	TextureLoader();
	~TextureLoader();

	void loadTexture(std::string fileName);
};

