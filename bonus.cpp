#pragma once

#include "bonus.h"
#include "freeglut.h"
#include <cstdlib>

bonus::bonus()
	:lado(2.0),
	posicion(0,0),
	velocidad(0,0),
	aceleracion(0,-9.8)
{

}

void bonus::dibuja()
{
	glPushMatrix(); //guarda el sistema de referencia actual
	glTranslated(posicion.x, posicion.y, 0); //traslada el sistema de referencia
	glRotatef(30, 1, 1, 1); //rota el sistema de referencia
	glColor3d(rand() / (double)RAND_MAX, rand() / (double)RAND_MAX,
		rand() / (double)RAND_MAX);//color aleatorio
	glutSolidCube(lado); //dibuja un cubo solido
	glPopMatrix(); //restaura el sistema de referencia
}

void bonus::mueve(float t)
{
	posicion.x = posicion.x + velocidad.x * t + 0.5 * aceleracion.x * t * t;
	posicion.y = posicion.y + velocidad.y * t + 0.5 * aceleracion.y * t * t;
	velocidad.x = velocidad.x + aceleracion.x * t;
	velocidad.y = velocidad.y + aceleracion.y * t;
}

