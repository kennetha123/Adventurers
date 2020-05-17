#include "Game.h"

Game::Game() :
	window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Adventurers!", sf::Style::Close | sf::Style::Resize),
	view(sf::Vector2f(0.0f, 0.0f), sf::Vector2f(SCREEN_WIDTH, SCREEN_HEIGHT))
{
	Start();
}

Game::~Game()
{

}

void Game::Run()
{
	Start();
	Update();
}

void Game::ResizeView(const sf::RenderWindow& window, sf::View& view)
{
	float aspectRatio = float(window.getSize().x) / float(window.getSize().y);
	view.setSize(SCREEN_HEIGHT * aspectRatio, SCREEN_HEIGHT);
}


void Game::Start()
{

}

void Game::ProcessEvents()
{
	sf::Event ev;
	while (window.pollEvent(ev))
	{
		switch (ev.type)
		{
		case sf::Event::Closed:
			window.close();
			break;
		case sf::Event::Resized:
			ResizeView(window, view);
			break;
		}
	}
}

void Game::Update()
{
	Player player(sf::Vector2f(64.0f,64.0f), sf::Vector2u(3, 4), 0.2f);
	Sprite gameObject(sf::Vector2f(400.0f, 200.0f), sf::Vector2f(500.0f, 200.0f));
	Sprite gameObject1(sf::Vector2f(400.0f, 200.0f), sf::Vector2f(500.0f, 0.0f));

	while (window.isOpen())
	{
		deltaTime = clock.restart().asSeconds();

		ProcessEvents();
		
		player.Update(deltaTime);
		gameObject.GetCollision().CheckCollision(player.GetCollision(), 1.0f);
		gameObject.GetCollision().CheckCollision(gameObject1.GetCollision(), 1.0f);
		gameObject1.GetCollision().CheckCollision(player.GetCollision(), 0.5f);
		view.setCenter(player.GetPosition());
		window.clear(sf::Color(150, 150, 150, 255));
		window.setView(view);
		player.Draw(window);
		gameObject.Draw(window);
		gameObject1.Draw(window);
		window.display();
	}
}