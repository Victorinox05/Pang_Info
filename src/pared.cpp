#pragma once

#include "pared.h"
#include "freeglut.h"

pared::pared(const color col,const vector2D lim1, const vector2D lim2)
	: Color(col), limite1(lim1), limite2(lim2)
{

}

void pared::dibuja()
{
	glDisable(GL_LIGHTING);
	glColor3ub(Color.r, Color.g, Color.b);
	glBegin(GL_POLYGON);
	glVertex3d(limite1.x, limite1.y, 10);
	glVertex3d(limite2.x, limite2.y, 10);
	glVertex3d(limite2.x, limite2.y, -10);
	glVertex3d(limite1.x, limite1.y, -10);
	glEnd();
	glEnable(GL_LIGHTING);
}

