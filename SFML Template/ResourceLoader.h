#pragma once
#include <SFML\Graphics.hpp>
#include <iostream>
#include <unordered_map>

namespace Engine {
	class ResourceLoader {
	public:
		static ResourceLoader* getInstance();

		void init();
		sf::Texture* getTextureByName(std::string fileName);
		sf::Font* getFontByName(std::string fileName);

	private:
		static ResourceLoader* _resourceLoader;

		std::unordered_map<std::string, sf::Texture*> textures;
		std::unordered_map<std::string, sf::Texture*>::iterator textureIterator;

		std::unordered_map<std::string, sf::Font*> fonts;
		std::unordered_map<std::string, sf::Font*>::iterator fontIterator;

		ResourceLoader();
		~ResourceLoader();
		
		void loadTexture(std::string fileName);
		void loadFont(std::string fileName);
	};
}