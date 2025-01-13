#pragma once
#include "Vector2.h"
class Entity
{
	Vector2 pos;
	float X;
	float Y;
public : 
	Entity(float Mx,float My);
	virtual float GetX();
	virtual float GetY();
	virtual float SetX(float x);
	virtual float SetY(float y);
};

