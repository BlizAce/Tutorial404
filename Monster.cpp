#include "Monster.h"
#include <iostream>

Monster::Monster()
{
	name = "Monster";
	alive = true;
}
Monster::~Monster()
{
}
void Monster::Greet()
{
	std::cout << "Hello, I am " << name << std::endl;
}

void Monster::Draw()
{
	if (alive)
	{
		std::cout << "M";
	}
	else
	{
		std::cout << "╫";
	}
}

void Monster::Update()
{
	// Move the monster
}