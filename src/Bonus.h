#pragma once
#include "Vector2D.h"
class Bonus
{
public: 
	Bonus();
	void dibuja();
	void Mueve(float t);
	void setPos(float ix, float iy);
private:
	float lado;
	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;
};

