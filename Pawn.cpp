#include "Pawn.h"
#include "Vector2.h"

Pawn::Pawn()
{
}

Pawn::Pawn(Vector2 position, int health, bool alive, std::string name)
{
	this->position = position;
	this->health = health;
	this->alive = alive;
	this->name = name;
}

void Pawn::Move(Vector2 moveDelta)
{
	position.x += moveDelta.x;
	position.y += moveDelta.y;
}

void Pawn::TakeDamage(int damage)
{
	health -= damage;
	if (health <= 0)
	{
		alive = false;
	}
}

bool Pawn::IsAlive()
{
	return alive;
}

void Pawn::Respawn()
{
	health = 100;
	alive = true;
}


Pawn::~Pawn()
{
}
