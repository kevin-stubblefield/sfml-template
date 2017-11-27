#include "ResourceLoader.h"

namespace Engine {
	ResourceLoader* ResourceLoader::_resourceLoader = NULL;

	ResourceLoader* ResourceLoader::getInstance() {
		if (_resourceLoader == NULL) {
			_resourceLoader = new ResourceLoader();
		}

		return _resourceLoader;
	}

	void ResourceLoader::init() {
		loadTexture("player.png");
	}

	sf::Texture* ResourceLoader::getTextureByName(std::string fileName) {
		textureIterator = textures.find(fileName);
		sf::Texture* returnValue = NULL;
		if (textureIterator != textures.end()) returnValue = textures[fileName];
		return returnValue;
	}

	sf::Font* ResourceLoader::getFontByName(std::string fileName) {
		fontIterator = fonts.find(fileName);
		sf::Font* returnValue = NULL;
		if (fontIterator != fonts.end()) returnValue = fonts[fileName];
		return returnValue;
	}

	void ResourceLoader::loadTexture(std::string fileName) {
		textureIterator = textures.find(fileName);
		if (textureIterator != textures.end()) return;

		sf::Texture* newTexture = new sf::Texture();
		newTexture->loadFromFile("assets\\images\\" + fileName);
		textures[fileName] = newTexture;
	}

	void ResourceLoader::loadFont(std::string fileName) {
		fontIterator = fonts.find(fileName);
		if (fontIterator != fonts.end()) return;

		sf::Font* newFont = new sf::Font();
		newFont->loadFromFile("assets\\fonts\\" + fileName);
		fonts[fileName] = newFont;
	}

	ResourceLoader::ResourceLoader() {
		init();
	}


	ResourceLoader::~ResourceLoader() {
	}
}