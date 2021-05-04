#include "Interaccion.h"


void Interaccion::rebote(Hombre& h, Caja c)
{
	float xmax = c.suelo.limite2.x;
	float xmin = c.suelo.limite1.x;
	if (h.posicion.x > xmax)
		h.posicion.x = xmax;
	if (h.posicion.x < xmin)
		h.posicion.x = xmin;
}

bool Interaccion::rebote(Esfera& e, Pared p)
{
	Vector2D dir;
	float dif = p.distancia(e.posicion, &dir) - e.radio;
	if (dif <= 0.0f)
	{
		Vector2D v_inicial = e.velocidad;
		e.velocidad = v_inicial - dir * 2.0 * (v_inicial * dir);
		e.posicion = e.posicion - dir * dif;
		return true;
	}
	return false;
}

void Interaccion::rebote(Esfera& e, Caja c) 
{
	rebote(e, c.pared_dcha);
	rebote(e, c.pared_izq);
	rebote(e, c.suelo);
	rebote(e, c.techo);
}


void Interaccion::rebote(Esfera& e1, Esfera& e2)
{
	Vector2D dir;
	float dif = e1.distancia(e2, &dir) - e1.radio- e2.radio;
	if (dif<0.0f)
	{
		Vector2D v_inicial1 = e1.velocidad;
		Vector2D v_inicial2 = e2.velocidad;
		e1.velocidad = e1.velocidad * ((e1.masa - e2.masa) / (e1.masa + e2.masa)) + e2.velocidad * ((2 * e2.masa) / (e1.masa + e2.masa));
		e2.velocidad = (v_inicial1 * e1.masa + e2.velocidad* e2.masa - e1.velocidad * e1.masa) * (1 / e2.masa);
		//e1.velocidad = v_inicial1 - dir * 2.0 * (v_inicial1 * dir);
		//e2.velocidad = v_inicial2 - dir * 2.0 * (v_inicial2 * dir);
		//e1.posicion = e1.posicion - dir * dif;
		//e2.posicion = e2.posicion - dir * dif;
		/*Vector2D v_inicial1 = e1.velocidad;
		Vector2D v_inicial2 = e2.velocidad;
		Vector2D v1 = v_inicial1 * ((e1.masa - e2.masa) / (e1.masa - e2.masa)) + v_inicial2 * ((2 * e2.masa) / (e1.masa + e2.masa));
		Vector2D v2 = (v_inicial1 * e1.masa + v_inicial2 * e2.masa - v1 * e1.masa) * (1 / e2.masa);
		e1.velocidad = v_inicial1 - dir * (v_inicial1 * dir) - dir * (v1 * dir);
		e2.velocidad = v_inicial2 - dir * (v_inicial2 * dir) - dir * (v2 * dir);
		e1.posicion = e1.posicion - dir * dif;
		e2.posicion = e2.posicion - dir * dif;*/
		
	}
}