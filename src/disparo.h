#pragma once

#include "vector2D.h"

class disparo
{
public:
	float radio;
	vector2D posicion;
	vector2D velocidad;
	vector2D aceleracion;
	vector2D origen;

public:
	disparo();
	void dibuja();
	void mueve(float t);
};
