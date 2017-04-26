#pragma once
#include <vector>
#include "Shape2D.h"
#include "GLUTScene.h"
#include "CompositeShape.h"

class Scene: public GLUTScene
{
public:
	// -- Constructor -- //
	Scene(unsigned int w, unsigned int h);

	// -- Causes the background to animate -- //
	void backgroundAnimation ();

	// -- Animates our compositeShape, hand -- //
	void handAnimation ();

	// -- Calls all the proper draw function for each shape -- //
	void draw() const;

	// -- Deletes a shape from the scene using its positon in the vector -- //
	void deleteShape(unsigned int position);

	// -- Adds a shape to the scene -- //
	void addShape(Shape2D* S);

	// -- Changes to next frame -- //
	void nextFrame();

	// -- Destructor -- //
	~Scene();

protected:
	//-- A vector to hold Shape2D -- //
	vector<Shape2D*> shapeVector;
};

