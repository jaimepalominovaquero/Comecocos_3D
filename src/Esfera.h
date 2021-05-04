#pragma once
#include "Vector2D.h"
#include "ColorRGB.h"
typedef unsigned char Byte;
class Esfera
{
public:
	Esfera();
	void dibuja();
	void Mueve(float t);
	float distancia(Esfera& e, Vector2D* direccion);
	void setColor(Byte r, Byte v, Byte a);
	void setRadio(float r);
	void setPos(float ix, float iy);
	void setVel(float vx, float vy);
	friend class Interaccion;

private:
	ColorRGB color; 
	float radio;
	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;
	float masa;
};

