#pragma once
#include "Shape2D.h"
class Circle2D : public Shape2D
{
public:
	// -- Constructor -- //
	Circle2D(double r, const Point2D& point, const Color& color);

	// -- Draw the circle to the screen using GL/freeGLUT -- //
	void draw() const;

protected:
	double r; //The radius of the circle
};


