#pragma once
#include "Creature.h"

//Abstract base class for all static objects on a map
class Object
{
public:
	Object(bool open);
	~Object();
	bool isWalkable();
	virtual void onCreatureEnters(Creature* c) = 0; //Called when a creature interacts with this object

private:
	bool open;
};

