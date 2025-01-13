#pragma once
#include "Alive.h"

class IAttacker
{
public : 
	virtual void Attack(Alive &Ennemy,float damage) = 0;
};

