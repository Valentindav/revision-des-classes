#include "Entity.h"
#include "iostream"

Entity::Entity(float x,float y) {
	X = x;
	Y = y; 
	pos.SetX(x);
	pos.SetY(y);
}
float Entity::GetX() {
	pos.GetX();	
	return X;
}
float Entity::GetY() {
	pos.GetY();
	return Y;
}
float Entity::SetX(float x) {
	X = x;
	pos.SetX(x);
	return 0;
}
float Entity::SetY(float y) {
	Y = y;
	pos.SetY(y);
	return 0;
}