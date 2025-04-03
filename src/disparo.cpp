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
    // Desactiva la iluminación para que el color se aplique directamente
    glDisable(GL_LIGHTING);
    // Ajusta el grosor de la línea de la estela
    glLineWidth(2.0);
    // Define un color para la estela
    glColor3ub(255, 0, 0);
    // Dibuja una línea desde el origen hasta la posición actual
    glBegin(GL_LINES);
    glVertex2f(origen.x, origen.y);
    glVertex2f(posicion.x, posicion.y);
    glEnd();
    // Reactiva la iluminación si la usas para otros elementos
    glEnable(GL_LIGHTING);

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

