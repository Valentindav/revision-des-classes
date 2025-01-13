#include "Player.h"
#include "iostream"

Player::Player(float X, float Y, float MaxHealth, float dirX, float dirY, float speed) :Entity(X, Y), Alive(MaxHealth), AMovable(dirX, dirY, speed) {
	std::cout << " Player just created at x = " << X << " and " << Y << " with " << MaxHealth << " with " << dirX << " and " << dirY << "\n";
}

void Player::TakeDamage(float damage) {
	Alive::TakeDamage(damage);
	std::cout << " Player just died " << "\n";
}

void Player::move(float X, float Y,float speed,float dirX,float dirY) {
	AMovable::move(X, Y,speed,dirX,dirY);
	std::cout << " Player moved to x = " << X << " and " << Y << "\n";
}

void Player::Attack(Alive &Ennemy,float damage) {
	std::cout << " Player just attacked. He dealt " << damage << " damage " << "\n";
	IAttacker::Attack(Ennemy, damage);
}