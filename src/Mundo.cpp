#include "Mundo.h"
#include "freeglut.h"
#include "math.h"


void Mundo::dibuja()
{
	gluLookAt(x_ojo, y_ojo, z_ojo,  // posicion del ojo
		0.0, 0.0, 0.0,      // hacia que punto mira  (0,0,0) 
		0.0, 1.0, 0.0);      // definimos hacia arriba (eje Y)    

	//aqui es donde hay que poner el codigo de dibujo
	//dibujo del suelo
	plataforma.dibuja();
}

void Mundo::teclaEspecial(unsigned char key)
{
}

void Mundo::mueve()
{
}

void Mundo::inicializa()
{
	x_ojo=0;
	y_ojo=-6;
	z_ojo=20;
	plataforma.setPos(9.0f, 5.0f);
	plataforma.setColor(255, 0, 0);
}

void Mundo::tecla(unsigned char key)
{
}
