#pragma once

#include "vector2D.h"
#include "Color.h"

class pared
{
public:
	color Color;
	vector2D limite1;
	vector2D limite2;

	pared();
	pared(const color col,const vector2D lim1, const vector2D lim2);
	void dibuja();
};

