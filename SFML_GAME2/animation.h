#pragma once
#include<sfml\Graphics.hpp>
class animation
{

public:
	// public fucntion
	animation(sf::Texture* texture, sf::Vector2u imageCount, float switchTime);
	~animation();

	void update(int row, float deltaTime);

private:
	//private function


public:
	//public variable
	sf::IntRect uvRect;

private:
	//private variable

	sf::Vector2u imageCount;
	sf::Vector2u currentImage;

	float totalTime;
	float switchTime;


};

