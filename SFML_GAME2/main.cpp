#include <SFML/Graphics.hpp>
int main()
{
	sf::RenderWindow window(sf::VideoMode(1000,750), "Tank MoD", sf::Style::Titlebar | sf::Style::Close);
	sf::RectangleShape player(sf::Vector2f(74.5f, 74.0f));
	player.setPosition(200.0f,200.0f);
	sf::Texture playerTexture;
	playerTexture.loadFromFile("tank/Untitled-2.png");
	player.setTexture(&playerTexture);

	sf::Vector2u textureSize = playerTexture.getSize();
	textureSize.x /= 8;
	textureSize.y /= 6;

	player.setTextureRect(sf::IntRect(textureSize.x * 7, textureSize.y * 5, textureSize.x, textureSize.y));

	while (window.isOpen())
	{
		sf::Event ev;
		while (window.pollEvent(ev))
		{
			switch (ev.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			}
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		{
			player.move(-0.1f, 0.f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			player.move(0.1f, 0.f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			player.move(0.f, -0.1f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			player.move(0.f, 0.1f);
		}
		
		window.clear();
		window.draw(player);
		window.display();
	}
	return 0;
}