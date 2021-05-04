#include "Disparo.h"
#include "freeglut.h"

Disparo::Disparo()
{
	radio = 0.25f;
	velocidad.y = 2;
}

void Disparo::dibuja() 
{
	glPushMatrix();
	glColor3f(0.0f, 1.0f, 1.0f);
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidSphere(radio, 20, 20);
	//glutSolidTetrahedron();
	glTranslatef(-posicion.x, -posicion.y, 0);
	glPopMatrix();

	glBegin(GL_LINES);
	auto puntox = origen.x;
	auto puntoy = origen.y;
	glColor3f(1.f, 0, 0);
	glVertex2i(origen.x, origen.y);
	// glVertex2i(posicion.x, posicion.y);
	while ((puntoy <= posicion.y) && (posicion.y < 15))
		glVertex2i(puntox, puntoy++);
	glEnd();
}
void Disparo::Mueve(float t) 
{
	posicion = posicion + velocidad * t + aceleracion * (0.5f * t * t);
	velocidad = velocidad + aceleracion * t;
}
void Disparo::setPos(float ix, float iy) {
	posicion.x = ix;
	posicion.y = iy;
	origen.x = posicion.x;
	origen.y = posicion.y;
}