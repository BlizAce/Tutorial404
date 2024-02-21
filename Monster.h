#pragma once
#include "Pawn.h"
class Monster : public Pawn
{
public:
	Monster();
	~Monster();
	void Greet() override;
	void Draw() override;
	void Update() override;
	
};

