/********************************************************************
*
*File: Rectangle2D.cpp
*Project: Programming Project 3 - CS 145 - Dr.Berrier
*Author: Leslie Murphy and Dylan Playle
*Description:
*Date: 4-30-16
*Comments: Implementation of the Rectangle2D class
*
*********************************************************************/

#include <iostream>
#include "Rectangle2D.h"

using namespace std;

Rectangle2D::Rectangle2D(double w, double h, const Point2D& XY, const Color& color) : Shape2D(XY,color), w(w), h(h) {}

// -- Draw the rectangle to the screen using GL/freeGLUT -- //
void Rectangle2D::draw() const
{
	color.tellOpenGL();
	glPushMatrix();
	glTranslated(0, 0, 0);
	//glTranslatef(XY.X, XY.Y, 0);
	glBegin(GL_QUADS);

		glVertex2d((XY.X + w), (XY.Y + h));
		glVertex2d((XY.X + w), XY.Y);
		glVertex2d(XY.X, XY.Y);
		glVertex2d(XY.X, (XY.Y + h));

	glEnd();
	glPopMatrix();
}

