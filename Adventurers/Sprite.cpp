#include "Sprite.h"
Sprite::Sprite(sf::Texture* texture, sf::Vector2f size, sf::Vector2f position)
{
	meshRenderer.setSize(size);
	meshRenderer.setOrigin(size / 2.0f);
	meshRenderer.setTexture(texture);
	meshRenderer.setPosition(position);
}

Sprite::~Sprite()
{

}

void Sprite::Draw(sf::RenderWindow& window)
{
	window.draw(meshRenderer);
}