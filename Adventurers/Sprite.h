#pragma once
#include <SFML/Graphics.hpp>
#include "Collision.h"
class Sprite
{
public:
	Sprite(sf::Texture* texture, sf::Vector2f size, sf::Vector2f position);
	~Sprite();

	void Draw(sf::RenderWindow& window);
	Collision GetCollision() { return Collision(meshRenderer); }
	sf::Vector2f GetPosition() { return meshRenderer.getPosition(); }

private:
	sf::RectangleShape meshRenderer;
};

