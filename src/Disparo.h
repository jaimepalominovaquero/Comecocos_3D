#pragma once
#include "Vector2D.h"
class Disparo
{
public:
	Disparo();
	void dibuja();
	void Mueve(float t);
	void setPos(float ix, float iy);
private:
	float radio;
	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;
	Vector2D origen;
};

