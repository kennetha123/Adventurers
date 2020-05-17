#include "GameObject.h"

GameObject::GameObject(sf::Vector2f size, sf::Vector2u(indexImage), float speed, std::string loadPath)
{
	meshRenderer.setSize(size);
	meshRenderer.setOrigin(size / 2.0f);
	meshRenderer.setTexture(&texture);
	texture.loadFromFile(loadPath);
}

GameObject::GameObject(sf::Vector2f size, sf::Vector2u(indexImage), sf::Vector2f position, std::string loadPath)
{
	meshRenderer.setSize(size);
	meshRenderer.setOrigin(size / 2.0f);
	meshRenderer.setPosition(position);
	meshRenderer.setTexture(&texture);
	texture.loadFromFile(loadPath);
}

GameObject::GameObject(sf::Vector2f size, sf::Vector2f position, std::string loadPath)
{
	meshRenderer.setSize(size);
	meshRenderer.setOrigin(size / 2.0f);
	meshRenderer.setPosition(position);
	texture.loadFromFile(loadPath);
}

GameObject::~GameObject()
{

}

void GameObject::Draw(sf::RenderWindow& window)
{
	window.draw(meshRenderer);
}
