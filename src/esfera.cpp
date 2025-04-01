#pragma once

#include "esfera.h"
#include "freeglut.h"

void Esfera::dibuja() {
	glColor3d(0.0, 1.0, 1.0);
	glPushMatrix();
	glTranslated(posicion.x, posicion.y, 0);
	glutSolidSphere(radio, 20, 20);
	glPopMatrix();
}

void Esfera::mueve(float t)
{
	posicion.x = posicion.x + velocidad.x * t + 0.5 * aceleracion.x * t * t;
	posicion.y = posicion.y + velocidad.y * t + 0.5 * aceleracion.y * t * t;
	velocidad.x = velocidad.x + aceleracion.x * t;
	velocidad.y = velocidad.y + aceleracion.y * t;
}