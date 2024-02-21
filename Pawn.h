#pragma once
#include <string>
#include "GameObject.h"
#include "Vector2.h"
struct Vector2;

class Pawn : public GameObject
{
public:

	char greeting[50];
	Pawn();
	Pawn(Vector2 position, int health, bool alive, std::string name);
	void Move(Vector2 moveDelta);
	void TakeDamage(int damage);
	void Respawn();
	bool IsAlive();
	virtual void Greet() = 0;
	~Pawn();

protected:
	Vector2 position;
	int health;
	bool alive;
	std::string name;
};

