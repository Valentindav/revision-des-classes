#pragma once
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"
class Player : public Entity, public Alive, public AMovable, public IAttacker
{

public : 
	Player(float X, float Y, float MaxHealth, float dirX, float dirY, float speed);
	void TakeDamage(float damage) override;
	void move(float X, float Y,float speed,float dirX,float dirY) override;
	void Attack(Alive &Ennemy,float damage) override;
};

