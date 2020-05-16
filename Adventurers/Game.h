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
	sf::Texture texture;
};

