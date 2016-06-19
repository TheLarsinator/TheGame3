#pragma once
#include "Tile.h"
#include "VectorInt.h"

class Map
{
private:
	Tile** tiles;
	VectorInt size;
public:
	Map();
	Map(VectorInt size);
	~Map();
};

