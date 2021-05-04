#pragma once
#include "Pared.h"
class Caja
{
public:
	Caja();
	void dibuja();
	friend class Interaccion;
private:
	Pared suelo;
	Pared techo;
	Pared pared_izq;
	Pared pared_dcha;
};

