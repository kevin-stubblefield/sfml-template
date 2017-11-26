#include "ResourceLoader.h"

namespace Engine {
	std::unordered_map<std::string, sf::Texture> ResourceLoader::textures;
	std::unordered_map<std::string, sf::Texture>::iterator ResourceLoader::textureIterator;

	std::unordered_map<std::string, sf::Font> ResourceLoader::fonts;
	std::unordered_map<std::string, sf::Font>::iterator ResourceLoader::fontIterator;

	sf::Texture ResourceLoader::getTextureByName(std::string fileName) {
		textureIterator = textures.find(fileName);
		sf::Texture returnValue;
		if (textureIterator != textures.end()) returnValue = textures[fileName];
		return returnValue;		
	}

	sf::Font ResourceLoader::getFontByName(std::string fileName) {
		fontIterator = fonts.find(fileName);
		sf::Font returnValue;
		if (fontIterator != fonts.end()) returnValue = fonts[fileName];
		return returnValue;
	}

	void ResourceLoader::loadTexture(std::string fileName) {
		textureIterator = textures.find(fileName);
		if (textureIterator != textures.end()) return;

		sf::Texture newTexture;
		newTexture.loadFromFile(fileName);
		textures[fileName] = newTexture;
	}

	void ResourceLoader::loadFont(std::string fileName) {
		fontIterator = fonts.find(fileName);
		if (fontIterator != fonts.end()) return;

		sf::Font newFont;
		newFont.loadFromFile(fileName);
		fonts[fileName] = newFont;
	}

	ResourceLoader::ResourceLoader() {
	}


	ResourceLoader::~ResourceLoader() {
	}
}