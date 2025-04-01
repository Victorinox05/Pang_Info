#pragma once

#include "vector2D.h"
#include "color.h"

class pared
{
public:
	color Color;
	vector2D limite1;
	vector2D limite2;

	//pared();
	pared(color col, vector2D lim1, vector2D lim2);
	void dibuja();
};

