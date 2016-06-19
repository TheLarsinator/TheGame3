#pragma once

#include <vector>
#include "Object.h"

using namespace std;

class Tile
{
private:
	vector<Object*> objects;
	bool hasObjects;
public:
	Tile() : hasObjects(false) {}
	Tile(Object* object);
	~Tile();

	bool isOpen();
	void addObject(Object *o) { objects.push_back(o); }
	Object* getNextObject() { return objects.back(); }
};

