/********************************************************************
*
*File: Square2D.cpp
*Author: Leslie Murphy and Dylan Playle
*Description:
*Date: 4-30-16
*Comments: Implementation of the Square2D class
*
*********************************************************************/

#include "Square2D.h"

// -- Constructor -- //
Square2D::Square2D(double length, const Point2D& XY, const Color& color) : Shape2D(XY, color), length(length) {}

//--The draw function that ovverrides Shape2D and makes a square--//
void Square2D::draw() const
{	
	color.tellOpenGL();
	glPushMatrix();
	glTranslated(0, 0, 0);
	glBegin(GL_QUADS);

		glVertex2d(XY.X + length, XY.Y + length);
		glVertex2d(XY.X+length, XY.Y);
		glVertex2d(XY.X, XY.Y);
		glVertex2d(XY.X, XY.Y + length);

	glEnd();
	glPopMatrix();
}