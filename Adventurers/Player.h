#pragma once
#include"Collision.h"
#include "GameObject.h"
class Player : public GameObject
{
public:
	Player(sf::Vector2f size, sf::Vector2u(indexImage), float speed);
	~Player();

	void Update(float deltaTime);
	void Draw(sf::RenderWindow& window) override;

	sf::Vector2f GetPosition() override { return GameObject::meshRenderer.getPosition(); }
	Collision GetCollision() { return Collision(GameObject::meshRenderer); }
	sf::Vector2u indexImage;
private:
	Animation animation;
};

