#pragma once
#include <SFML/Graphics.hpp>
#include "Animation.h"
class GameObject
{
public:
	GameObject(sf::Vector2f size, sf::Vector2u(indexImage), float speed, std::string loadPath);
	GameObject(sf::Vector2f size, sf::Vector2u(indexImage), sf::Vector2f position, std::string loadPath);
	GameObject(sf::Vector2f size, sf::Vector2f position, std::string loadPath);
	~GameObject();
	virtual void Draw(sf::RenderWindow& window);
	sf::Texture texture;
	virtual sf::Vector2f GetPosition() { return meshRenderer.getPosition(); }

protected:
	sf::RectangleShape meshRenderer;

};

