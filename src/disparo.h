#pragma once

#include "vector2D.h"

class disparo
{
public:
	float origen;
	float radio = 0.25;
	vector2D posicion{};
	vector2D velocidad{};
	vector2D aceleracion{ 0,5 };

public:
	void dibuja();
	void mueve(float t);
};
