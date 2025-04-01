#pragma once

#include "pared.h" 

class caja
{
	pared techo;
	pared suelo;
	pared izq;
	pared dcha;

public:
	caja(); //Constructor de la caja
	void dibuja();
};