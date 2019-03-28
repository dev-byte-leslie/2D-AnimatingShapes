/********************************************************************
*
*File: Scene.cpp
*Author: Leslie Murphy and Dylan Playle
*Description:
*Date: 4-30-16
*Comments: Implementation of the Scene class
*
*********************************************************************/

#include "Scene.h"

//--Constructor--//
Scene::Scene(unsigned int w, unsigned int h) : GLUTScene(w,h) {}

// -- Causes the background to animate -- //
void Scene::backgroundAnimation ()
{
	for ( unsigned int i = 0; i < 1; i++ )
	{
		if ( ( *shapeVector[ i ] ).getY () < 5 )
		{
			shapeVector[ i ]->move ( 0 , 900 );
		}
		else
		{
			shapeVector[ i ]->move ( 0 , -rand () % 20 );
			shapeVector[ i ]->getColor ().colorAnimation ( 0 , 50 , 195 , 150 );
		}
	}
}

// -- Animates our compositeShape, hand -- //
void Scene::handAnimation ()
{
	if ( ( *shapeVector[ shapeVector.size () - 1 ] ).getX () > 1400 )
	{
		shapeVector[ shapeVector.size () - 1 ]->move ( -1400 , 0 );
	}
	else
	{
		shapeVector[ shapeVector.size () - 1 ]->move ( 10 , 0 );
		shapeVector[ shapeVector.size () - 1 ]->getColor ().colorAnimation ( 250 , 0 , 0 , 150 );
	}
}

//--Adds a shape to the vector of shapes--//
void Scene::addShape(Shape2D* S) 
{
	shapeVector.push_back(S);
}

//--Deletes the shapes in the vector of shapes--//
void Scene::deleteShape(unsigned int position) 
{
	if (position <= shapeVector.size()) 
	{
		delete shapeVector[position];
		shapeVector.erase(shapeVector.begin() + position);
	}
}

//--Draws all of the shapes contained in the vector--//
void Scene::draw() const
{
	for (unsigned int i = 0; i < shapeVector.size(); i++) 
	{
			shapeVector[i]->draw();
	}
}

//--This function shows how many frames have happened--//
void Scene::nextFrame()
{
	backgroundAnimation();
	handAnimation();
}



//--Destructor--//
Scene::~Scene() 
{
	for (unsigned int i = 0; i < shapeVector.size(); i++) 
	{
		delete shapeVector[i];
	}
}