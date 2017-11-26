#include "ResourceLoader.h"


sf::Texture ResourceLoader::getTextureByName(std::string fileName) {
	textureIterator = textures.find(fileName);
	if (textureIterator != textures.end())	return textures[fileName];
}

sf::Font ResourceLoader::getFontByName(std::string fileName) {
	return sf::Font();
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
