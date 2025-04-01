#pragma once

//#include "caja.h"
//#include "hombre.h"
#include "esfera.h"
#include "bonus.h"
//#include "disparo.h" 

class Mundo
{
public:
	//caja caja1;
	//hombre jugador;
	Esfera esfera1;
	bonus bono;
	//disparo disparo1;
	//pared plataforma;

	void tecla(unsigned char key);
	void inicializa();
	void rotarOjo();
	void mueve();
	void dibuja();

	double x_ojo;
	double y_ojo;
	double z_ojo;
};
