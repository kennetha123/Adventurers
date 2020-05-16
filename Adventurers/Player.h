#pragma once
#include "Animation.h"
#include <SFML/Graphics.hpp>
#include"Collision.h"
class Player
{
public:
	Player(sf::Texture* texture, sf::Vector2u imageCount, float switchTime);
	~Player();

	void Update(float deltaTime);
	void Draw(sf::RenderWindow& window);

	sf::Vector2f GetPosition() { return meshRenderer.getPosition(); }
	Collision GetCollision() { return Collision(meshRenderer); }
private:
	sf::RectangleShape meshRenderer;
	Animation animation;
};

