#include "Player.h"
#include "Vector2.h"
#include <iostream>

void Player::Greet()
{
	std::cout << "Hello, I am " << name << std::endl;
}

void Player::Draw()
{
	if (alive)
	{
		std::cout << "@";
	}
	else
	{
		std::cout << "X";
	}
}

void Player::Update()
{
	// Add player input here
}
