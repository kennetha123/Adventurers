#pragma once
#include<SFML/Graphics.hpp>
#include"Animation.h"
#include"Player.h"
#include"Sprite.h"
#include"Collision.h"

class Game
{
public:
	Game();
	~Game();
	void Run();
	void Start();
	void Update();
	void Render();
	void ResizeView(const sf::RenderWindow& window, sf::View& view);
	void ProcessEvents();

private:
	unsigned int const SCREEN_WIDTH = 512;
	unsigned int const SCREEN_HEIGHT = 512;
	sf::RenderWindow window;
	sf::Clock clock;
	sf::View view;
	float deltaTime = 0.0f;
	void DrawObject(const sf::RectangleShape renderTarget);
	//sf::Texture playerTexture;
	sf::Texture treeTexture;
	//Player player(sf::Texture* texture, sf::Vector2u imageCount, float switchTime);
	//Sprite gameObject(sf::Texture* texture, sf::Vector2f size, sf::Vector2f position);
	//Sprite gameObject1(sf::Texture* texture, sf::Vector2f size, sf::Vector2f position);
};

