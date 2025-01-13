#include "BreakableObject.h"
#include "iostream"
BreakableObject::BreakableObject(float X, float Y,float MaxHealth) : Entity(X, Y), Alive ( MaxHealth) {
	SetX(X);
	SetY(Y);
	std::cout << " Breakable Object just created at " << X << " and " << Y << " with " << MaxHealth << " Hp " << "\n";
};

void BreakableObject::TakeDamage(float damage) {
	Alive::TakeDamage(damage);
	std::cout << " Breakable Object just broke " << "\n";
}