#pragma once
#include "Pawn.h"
class Player : public Pawn
{
public:
	void Greet() override;
	void Draw() override;
	void Update() override;
};

