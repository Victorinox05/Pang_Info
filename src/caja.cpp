#pragma once

#include "caja.h"

caja::caja() :
	techo { color(0,0,255), vector2D(-10,15), vector2D(10,15) },
	suelo{ color(0,0,255), vector2D(-10,0), vector2D(10,0) },
	izq{ color(0,255,0), vector2D(-10,0), vector2D(-10,15) },
	dcha{ color(0,255,0), vector2D(10,0), vector2D(10,15) }
{

}

void caja::dibuja() {
	techo.dibuja();
	suelo.dibuja();
	izq.dibuja();
	dcha.dibuja();
}