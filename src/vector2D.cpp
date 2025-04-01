#pragma once
#include "vector2D.h"

//Inicializar unso valores por defecto
vector2D::vector2D()
	:x{ 0.0 },
	y{ 0.0 }
{

}

//Inicializar los valores segun datos dados
vector2D::vector2D(double x, double y)
	:x(x),
	y(y)
{

}