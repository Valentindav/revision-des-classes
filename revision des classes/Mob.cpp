#include "Mob.h"
#include "iostream"

Mob::Mob(float X, float Y, float MaxHealth, float dirX, float dirY,float speed) : Entity(X,Y),Alive (MaxHealth), AMovable(dirX,dirY,speed){
	std::cout << " Mob just created at x = " << X << " and " << Y << " with " << MaxHealth << " with " << dirX << " and " << dirY << "\n";
}
void Mob::TakeDamage(float damage) {
	Alive::TakeDamage(damage);
	std::cout << " Mob just died " << "\n";
}
void Mob::move(float X,float Y,float speed,float dirX,float dirY) {
	X = X + (dirX* speed);
	Y = Y + (dirY * speed);
	AMovable::move(X, Y, speed, dirX, dirY);
	std::cout << " Mob move to x = " << X << " and " << Y << "\n";
}