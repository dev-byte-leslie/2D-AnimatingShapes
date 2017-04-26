/********************************************************************
*
*File: Color.cpp
*Project: Programming Project 3 - CS 145 - Dr.Berrier
*Author: Leslie Murphy and Dylan Playle
*Description: Given and added implementation for the Color class
*Date: 4-30-16
*Comments:
*
*********************************************************************/

#include "Color.h"
#include <GL/glut.h>
#include <cstdio>
#include <cmath>
#define GAMMA (1.0/2.2)

Color::Color(unsigned char red, unsigned char green, unsigned char blue,
	unsigned char alpha)
{
	// Copy the color channels
	vals[0] = red;
	vals[1] = green;
	vals[2] = blue;
	vals[3] = alpha;

	// Apply gamma correction (will look dim without this)
	gammaEncode();
}

Color::Color(unsigned int RGBHex, unsigned char alpha)
{
	// Copy the alpha value
	vals[3] = alpha;

	// Separate out the red, green, and blue from the hex value
	vals[2] = (unsigned char)(RGBHex & 0x0000FF);
	vals[1] = (unsigned char)((RGBHex & 0x00FF00) >> 8);
	vals[0] = (unsigned char)((RGBHex & 0xFF0000) >> 16);
}

void Color::tellOpenGL() const
{
	// Set this color as the currently active OpenGL color
	glColor4ubv((const GLubyte*)vals);
}

// Gamma correction: this brightens the color slightly so that
// it looks correct on the monitor.  Adjust GAMMA above to modify.
// (see https://en.wikipedia.org/wiki/Gamma_correction for details)
void Color::gammaEncode()
{
	double Rf = pow(vals[0] / 255.0, GAMMA);
	double Gf = pow(vals[1] / 255.0, GAMMA);
	double Bf = pow(vals[2] / 255.0, GAMMA);

	vals[0] = (unsigned char)floor(Rf * 255 + 0.5);
	vals[1] = (unsigned char)floor(Gf * 255 + 0.5);
	vals[2] = (unsigned char)floor(Bf * 255 + 0.5);
}

/****************************************************************************************/
/***************************       ADDED IMPLEMENTATION        **************************/
/****************************************************************************************/

// -- Sets the current color -- //
void Color::setColor(int red, int green, int blue)
{
	vals[0] = red;
	vals[1] = green;
	vals[2] = blue;
}

// -- Function to achieve gradual color animation -- //
void Color::colorAnimation(int red, int green, int blue, int fps)
{

	//red values
	if (vals[0] < red)
	{
		vals[0] += (red - vals[0]) / fps;
	}
	else
	{
		vals[0] -= (vals[0] - red) / fps;
	}

	// green values
	if (vals[1] < green)
	{
		vals[1] += (green - vals[1]) / fps;
	}
	else
	{
		vals[1] -= (vals[1] - green) / fps;
	}

	// blue values
	if (vals[2] < blue)
	{
		vals[2] += (blue - vals[0]) / fps;
	}
	else
	{
		vals[2] -= (vals[0] - blue) / fps;
	}
}