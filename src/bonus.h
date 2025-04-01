#pragma once
#include "vector2D.h"

class bonus
{
public:
	float lado=2.0;
	vector2D posicion;
	vector2D velocidad;
	vector2D aceleracion;

public:
	void dibuja();
	void mueve(float t);
};

