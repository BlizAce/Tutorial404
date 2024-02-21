#pragma once
#include "GameObject.h"

enum GroundType
{
	GRASS,
	SAND,
	WATER
};

class Ground : public GameObject
{
public:
	Ground() { type = GroundType::GRASS; };
	~Ground() {};
	void Draw();
	void Update();
	void SetType(GroundType type);
private:
	GroundType type;
};

