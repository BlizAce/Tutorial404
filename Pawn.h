#pragma once
#include <string>
struct Vector2;

class Pawn
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
		virtual void Draw() = 0;
		virtual void Update() = 0;
		~Pawn();

protected:
	Vector2 position;
	int health;
	bool alive;
	std::string name;
};

