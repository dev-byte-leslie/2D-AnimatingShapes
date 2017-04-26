#pragma once

#include <iostream>
#include <GL/GLUT.h>
#include "Point2D.h"
#include "Color.h"

using namespace std;

class Shape2D
{
public:
	// -- Constructor -- //
	Shape2D(const Point2D& XY, const Color& color);

	virtual void draw() const;

	// -- Moves X and Y values-- //
	void move(double X2, double Y2);

	// -- A getter for the X point -- //
	int Shape2D::getX ()
	{
		double x = XY.X;
		return x;
	}

	// -- A getter for the Y point --  //
	int Shape2D::getY ()
	{
		double y = XY.Y;
		return y;
	}

	// -- A getter for the color -- //
	Color& Shape2D::getColor ()
	{
		return color;
	}

protected:
	//--Objects for the constructor--//
	Color color;
	Point2D XY;  
};

