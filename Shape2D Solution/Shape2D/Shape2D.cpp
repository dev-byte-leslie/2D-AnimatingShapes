/********************************************************************
*
*File: Shape2D.cpp
*Project: Programming Project 3 - CS 145 - Dr.Berrier
*Author: Leslie Murphy and Dylan Playle
*Description:
*Date: 4-30-16
*Comments: Implementation of the Shape2D class
*
*********************************************************************/

#include "Shape2D.h"

// -- Constructor -- //
Shape2D::Shape2D(const Point2D& XY, const Color& color) : XY(XY),color(color) {}

void Shape2D::draw() const {}

// -- Moves X and Y values-- //
void Shape2D::move(double X2, double Y2) 
{
	XY.Y = XY.Y+Y2;
	XY.X = XY.X+X2;
}