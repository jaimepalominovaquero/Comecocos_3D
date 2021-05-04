#include "Esfera.h"
#include "freeglut.h"
typedef unsigned char Byte;
Esfera::Esfera()
{
	radio = 1.0f;
	aceleracion.y = -9.8f;
}

void Esfera::setColor(Byte r, Byte v, Byte a)
{
	color.set(r, v, a);
}
void Esfera::setRadio(float r)
{
	if (r < 0.1f)
		r = 0.1f;
	radio = r;
	masa = 3.1416 * r * r;
}
void Esfera::setPos(float ix, float iy)
{
	posicion.x = ix;
	posicion.y = iy;
}
void Esfera::setVel(float vx, float vy)
{
	velocidad.x = vx;
	velocidad.y = vy;
}
void Esfera::dibuja() 
{
	glColor3ub(color.r, color.g, color.b);
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidSphere(radio, 20, 20);
	glTranslatef(-posicion.x, -posicion.y, 0);
}
void Esfera::Mueve(float t) 
{
	posicion = posicion + velocidad * t + aceleracion * (0.5f * t * t);
	velocidad = velocidad + aceleracion * t;
}
float Esfera::distancia(Esfera &e, Vector2D* direccion)
{
	Vector2D dir = (e.posicion - posicion);
	float distancia = dir.modulo();
	if (direccion != 0) //si nos dan un vector…
		*direccion = dir.unitario();
	return distancia;
}


