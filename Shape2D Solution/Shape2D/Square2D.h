#pragma once

#include "Shape2D.h"


class Square2D : public Shape2D 
{
public:
	// -- Constructor -- //
	Square2D(double length, const Point2D& XY, const Color& color);

	// -- Draw - Implementation using FreeGLUT to draw the square to the screen -- //
	void draw() const;

protected:
	double length;
};