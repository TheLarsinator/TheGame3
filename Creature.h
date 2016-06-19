#pragma once

#include <string>

using namespace std;

class Creature
{
public:
	Creature();
	~Creature();
private:
	int health;
	int maxHealth;
	int strength;
	string name;
	string symbol;
};

