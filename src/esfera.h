#pragma once

#include "vector2D.h"
#include "Color.h"

class Esfera
{
private:
	double radio;
	vector2D posicion;
	vector2D velocidad;
	vector2D aceleracion{ 0.0,-9.8 };
	color Color;

public:
	void dibuja(); //Funcion de dibujar
	void mueve(float t);
	void setColor(const color& col);
	void setRadio(double radio);
	void setPos(const vector2D& pos); //Por que const???
};

