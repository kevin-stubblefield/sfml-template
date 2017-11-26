#pragma once
#include <SFML\Graphics.hpp>
#include <iostream>
#include <unordered_map>

namespace Engine {
	class ResourceLoader {
	public:
		static void init();
		static sf::Texture getTextureByName(std::string fileName);
		static sf::Font getFontByName(std::string fileName);

	private:
		static std::unordered_map<std::string, sf::Texture> textures;
		static std::unordered_map<std::string, sf::Texture>::iterator textureIterator;

		static std::unordered_map<std::string, sf::Font> fonts;
		static std::unordered_map<std::string, sf::Font>::iterator fontIterator;

		ResourceLoader();
		~ResourceLoader();
		
		static void loadTexture(std::string fileName);
		static void loadFont(std::string fileName);
	};
}