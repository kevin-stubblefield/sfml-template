#include "TextureLoader.h"


sf::Texture TextureLoader::getTextureByName(std::string name) {
	return textures[name];
}

void TextureLoader::loadTexture(std::string fileName) {
	sf::Texture newTexture;
	newTexture.loadFromFile(fileName);
	textures[fileName] = newTexture;
}

TextureLoader::TextureLoader() {
}


TextureLoader::~TextureLoader() {
}
