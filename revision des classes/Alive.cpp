#include "Alive.h"
#include "iostream"

Alive::Alive(float MaxHealth) {
	MaxHp = MaxHealth;
	HP = MaxHp;
}
float Alive::GetMaxHealth() {
	std::cout << MaxHp << "\n";
	return MaxHp;
}
float Alive::GetHealth() {
	std::cout << HP << "\n";
	return HP;
}
void Alive::TakeDamage(float damage) {
	HP = HP - damage;
}