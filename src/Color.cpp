#pragma once

#include "Color.h"

color::color(uchar r, uchar g, uchar b)
	: r{r},
	g{g},
	b{b}
{

}

color::color() 
	:r{ 255 },
	g{ 255 },
	b{ 255 }
{

}