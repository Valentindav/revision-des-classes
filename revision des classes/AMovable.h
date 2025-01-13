#pragma once
#include "Vector2.h"
#include "Entity.h"

class AMovable
{
	Vector2 direction;
	float speed;
	float dirX, dirY;
	float X, Y;
public : 
	AMovable(float X, float Y, float _speed);
	virtual void setDirection(float X, float Y);
	virtual void setSpeed(float speed);
	virtual void move(float X, float Y,float speed,float dirX,float dirY) = 0;
};

