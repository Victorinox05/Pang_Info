#pragma once

#include "vector2D.h"

class hombre
{
public:
	float altura = 1.8;
	vector2D posicion{};
	vector2D velocidad{};
	vector2D aceleracion{ 0,0 };

public:
	void dibuja();
	void mueve(float t);
};

