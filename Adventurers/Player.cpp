#include "Player.h"

Player::Player(sf::Texture* texture, sf::Vector2u imageCount, float switchTime) :
	animation(texture, imageCount, switchTime)
{
	meshRenderer.setSize(sf::Vector2f(64.0f, 64.0f));
	meshRenderer.setTexture(texture);
	meshRenderer.setOrigin(meshRenderer.getSize() / 2.0f);
}

Player::~Player()
{

}

void Player::Update(float deltaTime)
{
	meshRenderer.setTextureRect(animation.uvRect);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
	{
		meshRenderer.move(-0.1f, 0.0f);
		animation.Update(1, deltaTime);

	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
	{
		meshRenderer.move(0.1f, 0.0f);
		animation.Update(2, deltaTime);

	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
	{
		meshRenderer.move(0.0f, -0.1f);
		animation.Update(3, deltaTime);

	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
	{
		meshRenderer.move(0.0f, 0.1f);
		animation.Update(0, deltaTime);
	}
}

void Player::Draw(sf::RenderWindow& window)
{
	window.draw(meshRenderer);
}

