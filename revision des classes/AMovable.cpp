#include "AMovable.h"
#include "iostream"

AMovable::AMovable(float X,float Y, float _speed)  {
	direction.SetX(X);
	direction.SetY(Y);
	speed = _speed;
}

void AMovable::setDirection(float X,float Y) {
	direction.SetX(X);
	direction.SetY(Y);
 }

void AMovable::setSpeed(float _speed) {
	speed = _speed;
}
void AMovable::move(float X,float Y,float speed,float dirX,float dirY) {
	direction.SetX(X);
	direction.SetY(Y);
}
