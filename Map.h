#pragma once
struct Vector2;
class Pawn;

class Map
{
public:
	Map();
	~Map();
	void Draw();
	void Init();
	void SetMap(Vector2 position, int value);
	int GetMap(Vector2 position);
	bool IsMovable(Vector2 position);

private:
	Pawn* map[8][8];
};

