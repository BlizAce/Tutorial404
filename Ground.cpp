#include "Ground.h"
#include <iostream>
void Ground::Draw()
{
	switch (type)
	{
	case GroundType::GRASS:
		std::cout << "…";
		break;
	case GroundType::SAND:
		std::cout << "÷";
		break;
	case GroundType::WATER:
		std::cout << "~";
		break;
	}
}

void Ground::Update()
{
}

void Ground::SetType(GroundType type)
{
	this->type = type;
}
