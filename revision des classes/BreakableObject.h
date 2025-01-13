#pragma once
#include "Entity.h"
#include "Alive.h"

class BreakableObject : public Entity, public Alive
{
public : 
	BreakableObject(float X,float Y, float MaxHealth);
	void TakeDamage(float damage) override;
};

