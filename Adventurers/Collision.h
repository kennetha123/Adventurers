#pragma once
#include<SFML/Graphics.hpp>
class Collision
{
public:
	Collision(sf::RectangleShape& meshRenderer);
	~Collision();

	void Move(float dx, float dy) { meshRenderer.move(dx, dy); }

	bool CheckCollision(Collision other, float push);
	sf::Vector2f GetPosition() { return meshRenderer.getPosition(); }
	sf::Vector2f GetHalfSize() { return meshRenderer.getSize() / 2.0f; }
private:
	sf::RectangleShape& meshRenderer;
};

