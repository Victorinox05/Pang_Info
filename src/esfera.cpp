#pragma once

#include "esfera.h"
#include "freeglut.h"

void Esfera::dibuja() {
	glColor3ub(Color.r, Color.g, Color.b);
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

void Esfera::setColor(const color& col)
{
	this->Color = col;
}

void Esfera::setRadio(double r)
{
	this->radio = r;
}

void Esfera::setPos(const vector2D& pos)
{
	this->posicion = pos;
}