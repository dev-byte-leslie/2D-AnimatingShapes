/********************************************************************
*
*File: CompositeShape.cpp
*Author: Leslie Murphy and Dylan Playle
*Description: Implementation for the CompositeShape class
*Date: 4-30-16
*Comments:
*
*********************************************************************/

#include "CompositeShape.h"

// -- Constructor -- //
CompositeShape::CompositeShape(const Point2D& XY, const Color& color) : Shape2D(XY, color) {}

// -- Adds a shape to the compositeShape vector -- //
void CompositeShape::addShape(Shape2D* S)
{
	compositeShape.push_back(S);
}

// -- Deletes a shape from the vector -- //
void CompositeShape::deleteShape(unsigned int index)
{
	delete compositeShape[index];
	compositeShape.erase(compositeShape.begin() + index);
}

// -- Draw - Implementation using FreeGLUT to draw our CompositeShape to the screen -- //
void CompositeShape::draw() const
{
	glPushMatrix();
	glTranslatef(XY.X, XY.Y, 0);
	for (unsigned int i = 0; i < compositeShape.size(); i++)
	{
		compositeShape[i]->getColor().setColor(color.getRed(), color.getGreen(), color.getBlue());
		compositeShape[i]->draw();
	}
	glEnd();
	glPopMatrix();
}

// -- Destructor -- //
CompositeShape::~CompositeShape()
{
	for (unsigned int i = 0; i < compositeShape.size(); i++)
	{
		delete compositeShape[i];
	}
}