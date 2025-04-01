#pragma once

typedef unsigned char uchar;

class color //Al ser struct, todos los miembros son públicos por defecto
{
public:
	uchar r;
	uchar g;
	uchar b;

	color();
	color(size_t r, size_t g, size_t b);
};

