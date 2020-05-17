#include "Sprite.h"

Sprite::Sprite(sf::Vector2f size, sf::Vector2u(indexImage), sf::Vector2f position) : GameObject(size, indexImage, position, "../Assets/Graphics/Outside_B.png")
{
	uvRect.width = GameObject::texture.getSize().x / float(indexImage.x);
	uvRect.height = GameObject::texture.getSize().y / float(indexImage.y);
	uvRect.left = currentImage.x * uvRect.width;
	uvRect.top = currentImage.y * uvRect.height;
}



Sprite::Sprite(sf::Vector2f size, sf::Vector2f position) : GameObject(size, position, "../Assets/Graphics/Outside_B.png")
{
	meshRenderer.setTexture(nullptr);
}


Sprite::~Sprite()
{

}

void Sprite::Draw(sf::RenderWindow& window)
{
	window.draw(meshRenderer);
}