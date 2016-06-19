#include "Map.h"

Map::Map() : tiles(nullptr), size(VectorInt(0, 0))
{
}

Map::Map(VectorInt size) : size(size)
{
	tiles = new Tile*[size.col];
	for (int i = 0; i < size.col; i++)
	{
		tiles[i] = new Tile[size.row];
	}
}


Map::~Map()
{
	for (int i = 0; i < size.col; i++)
	{
		delete[] tiles[i];
		tiles[i] = nullptr;
	}
	delete[] tiles;
	tiles = nullptr;
}
