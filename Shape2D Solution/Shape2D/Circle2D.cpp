/********************************************************************
*
*File: Circle2D.cpp
*Project: Programming Project 3 - CS 145 - Dr.Berrier
*Author: Leslie Murphy and Dylan Playle
*Description: Implementation for the Circle2D class
*Date: 4-30-16
*Comments:
*
*********************************************************************/

#include "Circle2D.h"
#include <math.h>
#define PI 3.14159265

// -- Constructor -- //
Circle2D::Circle2D(double r, const Point2D& XY, const Color& color) : Shape2D(XY, color), r(r) {}

// -- Draw - Implementation using FreeGLUT to draw the circle to the screen -- //
void Circle2D::draw() const
{
	double twoPI = 2.0 * PI;

	glPushMatrix();
	color.tellOpenGL(); //Tell open GL the color to draw the shape in
	glTranslated(0, 0, 0); //Move to origin of circle

	glBegin(GL_TRIANGLE_FAN);

	glVertex2d(XY.X, XY.Y);
	for (int i = 0; i <= 360; i++) //The part that does the actual drawing
	{
		glVertex2d((r * sin(i + (twoPI))) + XY.X, (r * cos(i + (twoPI))) + XY.Y);
	}

	glEnd();

	glPopMatrix();
}