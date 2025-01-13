#pragma once
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
class Mob : public Entity, public Alive, public AMovable
{
public: 
	Mob(float X,float Y,float MaxHealth,float dirX,float dirY,float speed);
	void TakeDamage(float damage) override;
	void move(float X,float Y,float speed,float dirX,float dirY) override;
};

