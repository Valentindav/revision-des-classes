#include "Vector2.h"
#include "iostream"

float Vector2::GetX() {
	std::cout << x << "\n";
	return x;
}
float Vector2::GetY() {
	std::cout << y << "\n";
	return y;
}
float Vector2::SetX(float _x) {
	x = _x;
	return 0;
}
float Vector2::SetY(float _y) {
	y = _y;
	return 0;
}