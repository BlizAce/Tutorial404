#include "Map.h"
#include "Pawn.h"

Map::Map()
{

}

Map::~Map()
{
	for (int i = 0; i < 8; i++)
	{
		delete[] map[i];
	}
	delete[] map;
}