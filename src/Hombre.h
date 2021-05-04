#pragma once
#include "Vector2D.h"
class Hombre
{
public:
	Hombre();
	void dibuja();
	void Mueve(float t);
	void setVel(float vx, float vy);
	friend class Interaccion;

private:
	float altura;
	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;
};

