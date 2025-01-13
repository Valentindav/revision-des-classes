#pragma once
#include <vector>
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "Player.h"

class World
{
	std::vector<Entity*> entity;
public : 
	void init();
	void step();
};

