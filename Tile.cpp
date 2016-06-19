#include "Tile.h"



Tile::Tile()
{
}


Tile::Tile(Object * object) : hasObjects(true)
{
	objects.push_back(object);
}

Tile::~Tile()
{
}

bool Tile::isOpen()
{
	if (hasObjects)
	{
		return getNextObject()->isWalkable();
	}
	return false;
}
