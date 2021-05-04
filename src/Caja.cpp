#pragma once
#include "Caja.h"

Caja::Caja()
{	
	//Techo
	techo.setColor(0, 100, 0);
	techo.setPos(-10.0f, 15.0f, 10.0f, 15.0f);

	//Pared dcha
	pared_dcha.setColor(0, 150, 0);
	pared_dcha.setPos(10.0f, 0, 10.0f, 15.0f);

	//Suelo
	suelo.setColor(0, 100, 0);
	suelo.setPos(-10.0f, 0, 10.0f, 0);

	//Pared izq
	pared_izq.setColor(0, 150, 0);
	pared_izq.setPos(-10.0f, 0, -10.0f, 15.0f);


}

void Caja::dibuja() 
{
	suelo.dibuja();
	techo.dibuja();
	pared_izq.dibuja();
	pared_dcha.dibuja();
}