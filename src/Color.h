#pragma once

typedef unsigned char uchar;

class color //Al ser struct, todos los miembros son p�blicos por defecto
{
public:
	uchar r;
	uchar g;
	uchar b;

	color();
	color(uchar r, uchar g, uchar b);
};

