#include "Object.h"

Object::Object(bool open) : open(open)
{
}


Object::~Object()
{
}

bool Object::isWalkable()
{
	return open;
}
