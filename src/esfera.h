#pragma once

#include "vector2D.h"
#include "Color.h"

class Esfera
{
public:
	double radio;
	vector2D posicion;
	vector2D velocidad;
	vector2D aceleracion{ 0.0,-9.8 };
	color Color;

public:
	void dibuja(); //Funcion de dibujar
	void mueve(float t);
};

