#include "IAttacker.h"
#include "iostream"

void IAttacker::Attack(Alive &Ennemy,float damage) {
	Ennemy.TakeDamage(damage);
}