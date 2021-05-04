#include "Pared.h"

class Mundo
{
public: 
	void tecla(unsigned char key);
	void inicializa();
	void mueve();
	void dibuja();
	void teclaEspecial(unsigned char key);
		


	float x_ojo;
	float y_ojo;
	float z_ojo;
	Pared plataforma;
	
};
