#pragma once
class Alive
{
	float MaxHp;
	float HP;
public : 
	Alive(float MaxHealth);
	virtual float GetMaxHealth();
	virtual float GetHealth();
	virtual void TakeDamage(float damage);
};

