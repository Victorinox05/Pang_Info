#pragma once

#include "vector2D.h"
#include "color.h"

class Esfera
{
public:
	double radio;
	vector2D posicion;
	vector2D velocidad;
	vector2D aceleracion{ 0.0,-9.8 };
	color color;

	void dibuja(); //Funcion de dibujar
	void mueve(float t);
};

