#pragma once
#include "Vector2D.h"
#include "ColorRGB.h"
typedef unsigned char Byte;
class Pared
{
public:
	Pared();
	void dibuja();
	void setColor(Byte r, Byte v, Byte a);
	void setPos(float x1, float y1);
	float distancia(Vector2D punto, Vector2D* direccion = 0);
	friend class Interaccion;
private:
	ColorRGB color;
	Vector2D limite1;
	Vector2D limite2;

	
};

