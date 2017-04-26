#pragma once
#include <iostream>

class Point2D
{
public:
	// -- Constructor (x, y) -- //
	Point2D(double X, double Y); //Defaults values to (0, 0)
	double X, Y;    //public x and y values of points
};