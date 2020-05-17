#pragma once
#include "Collision.h"
#include "GameObject.h"
class Sprite : public GameObject
{
public:
	Sprite(sf::Vector2f size, sf::Vector2u(indexImage), sf::Vector2f position);
	Sprite(sf::Vector2f size, sf::Vector2f position);
	~Sprite();

	void Draw(sf::RenderWindow& window) override;
	Collision GetCollision() { return Collision(meshRenderer); }
	sf::Vector2f GetPosition() override { return meshRenderer.getPosition(); }
	sf::Vector2u indexImage;
	sf::IntRect uvRect;
	sf::Vector2u currentImage;

};

