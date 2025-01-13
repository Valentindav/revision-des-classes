#include "StaticObject.h"

StaticObject::StaticObject(float X, float Y) : Entity(X, Y) {
	SetX(X);
	SetY(Y);
	std::cout << " Static Object just created at " << X << " and " << Y << "\n";
};