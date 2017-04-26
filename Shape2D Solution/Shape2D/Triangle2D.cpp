/********************************************************************
*
*File: Triangle2D.cpp
*Project: Programming Project 3 - CS 145 - Dr.Berrier
*Author: Leslie Murphy and Dylan Playle
*Description:
*Date: 4-30-16
*Comments: Implementation of the Triangle2D class
*
*********************************************************************/

#include "Triangle2D.h"


//--Empty Constructor--//
Triangle2D::Triangle2D(const Point2D& vert1, const Point2D& vert2, const Point2D& vert3, const Point2D& XY, const Color& color)
	:vert1(vert1),vert2(vert2),vert3(vert3),Shape2D(XY,color) {}

//--The draw function that ovverrides Shape2D and makes a triangle--//
void Triangle2D::draw() const
{
	color.tellOpenGL();
	glPushMatrix();
	glTranslated(0, 0, 0);
	glBegin(GL_TRIANGLES);

		glVertex2d(XY.X + vert1.X, XY.Y + vert1.Y);
		glVertex2d(XY.X + vert2.X, XY.Y + vert2.Y);
		glVertex2d(XY.X + vert3.X, XY.Y + vert3.Y);

	glEnd();
	glPopMatrix();
}