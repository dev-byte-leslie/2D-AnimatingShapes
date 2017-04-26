#pragma once
#include "Shape2D.h"
#include "GLUTScene.h"
#include "Scene.h"
#include <vector>

class CompositeShape : public Shape2D
{
public:
	// -- Constructor -- //
	CompositeShape(const Point2D& XY, const Color& color);

	// -- Adds a shape to the compositeShape vector -- //
	void addShape(Shape2D* S);

	// -- Deletes a shape from the vector -- //
	void deleteShape(unsigned int index);

	// -- Calls the individual draw functions for each shape using GL/freeGLUT -- //
	void draw() const;

	// -- Destructor -- //
	~CompositeShape();

protected:
	vector<Shape2D*> compositeShape; //A vector to hold Shape2D
};
