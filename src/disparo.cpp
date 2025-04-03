#pragma once

#include "freeglut.h"
#include "disparo.h"

disparo::disparo()
	: radio(0.25),
	posicion(0,0),
	velocidad(0,0),
	aceleracion(0,5),
	origen(posicion) //Inicializar origen con la posicion inicial
{

}

void disparo::dibuja() {

    // Dibuja la estela
    glLineWidth(4.0);
    glColor3ub(255, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(origen.x, origen.y);
	glColor3ub(255, 255, 255);
    glVertex2f(posicion.x, posicion.y);
    glEnd();

	//Dibuja el disparo
	glColor3d(0.0, 1.0, 1.0);
	glPushMatrix();
	glTranslated(posicion.x, posicion.y, 0);
	glutSolidSphere(radio, 20, 20);
	glPopMatrix();
}

void disparo::mueve(float t)
{
	posicion.x = posicion.x + velocidad.x * t + 0.5 * aceleracion.x * t * t;
	posicion.y = posicion.y + velocidad.y * t + 0.5 * aceleracion.y * t * t;
	velocidad.x = velocidad.x + aceleracion.x * t;
	velocidad.y = velocidad.y + aceleracion.y * t;
}

