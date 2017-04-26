#pragma once

#include "Shape2D.h"

class Rectangle2D : public Shape2D
{
public:
	// -- Constructor -- //
	Rectangle2D(double w, double h, const Point2D& XY, const Color& color);

	// -- Draw the rectangle to the screen using GL/freeGLUT -- //
	void draw() const;

protected:
	double w; //width of the rectangle
	double h; //height of the rectangle
};

