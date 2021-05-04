#include "Hombre.h"
#include "freeglut.h"

Hombre::Hombre()
{
	altura = 1.8f;

}

void Hombre::dibuja() 
{
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, 0);
	glColor3f(1.0f, 0.0f, 0.0f);
	glutSolidSphere(altura, 20, 20);
	glPopMatrix();
} 

void Hombre::Mueve(float t)
{
	posicion = posicion + velocidad * t + aceleracion * (0.5f * t * t);
	velocidad = velocidad + aceleracion * t;

	//NO ES LA FORMA ADECUADA DE RESOLVERLO: NO ES ORDENADO!!!!!!
	if (posicion.x > 10.0f)
		posicion.x = 10.0f;
	if (posicion.x < -10.0f)
		posicion.x = -10.0f;
}
void Hombre::setVel(float vx, float vy)
{
	velocidad.x = vx;
	velocidad.y = vy;
}
