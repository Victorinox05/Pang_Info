#pragma once

#include "mundo.h"
#include "freeglut.h"
#include <cmath>

void Mundo::rotarOjo()
{
	double dist = sqrt(x_ojo * x_ojo + z_ojo * z_ojo);
	double ang = atan2(z_ojo, x_ojo);
	ang += 0.05;
	x_ojo = dist * cos(ang);
	z_ojo = dist * sin(ang);
}
void Mundo::dibuja()
{
	gluLookAt(x_ojo, y_ojo, z_ojo,  // posicion del ojo
		0.0, y_ojo, 0.0,      // hacia que punto mira  (0,0,0) 
		0.0, 1.0, 0.0);      // definimos hacia arriba (eje Y)    

	//aqui es donde hay que poner el codigo de dibujo

	caja1.dibuja();
	jugador.dibuja();
	esfera1.dibuja();
	bono.dibuja();
	disparo1.dibuja();
	plataforma.dibuja();
}

void Mundo::mueve()
{
	//Mundo::rotarOjo();

	jugador.mueve(0.025);
	esfera1.mueve(0.025);
	bono.mueve(0.025); 
	disparo1.mueve(0.025);
}

void Mundo::inicializa()
{
	x_ojo = 0;
	y_ojo = 7.5;
	z_ojo = 30;


	esfera1.setPos({ 2.0,4.0 }); 
	esfera1.setRadio(1.5);
	esfera1.setColor({0,0,255}); 

	bono.posicion = { 5.0,5.0 };

	disparo1.posicion = { -5.0,0.0 };
	disparo1.origen = disparo1.posicion;

	plataforma.setColor({ 0,0,255 });
}

void Mundo::tecla(unsigned char key)
{

}
