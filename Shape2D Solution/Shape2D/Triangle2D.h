#pragma once

#include "Shape2D.h"
#include "Point2D.h"


class Triangle2D : public Shape2D
{
public:
	// -- Constructor -- //
	Triangle2D(const Point2D& vert1, const Point2D& vert2, const Point2D& vert3, const Point2D& XY, const Color& color); 

	// -- Draw - Implementation using FreeGLUT to draw the triangle to the screen -- //
	void draw() const;

protected:
	// -- Each point of the triangle -- //
	Point2D vert1, vert2, vert3;
};