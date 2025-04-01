#pragma once

#include "color.h"

color::color(size_t r, size_t g, size_t b)
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