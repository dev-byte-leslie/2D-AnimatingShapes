#include <iostream>
#include <cstdio>
#include <vector>
#include <GL/GLUT.h>

#include "Color.h"
#include "Shape2D.h"
#include "Rectangle2D.h"
#include "Point2D.h"
#include "Scene.h"
#include "Triangle2D.h"
#include "Circle2D.h"
#include "Square2D.h"
#include "GLUTScene.h"
#include "CompositeShape.h"

using namespace std;


int main(int argc, char** argv) 
{

	//-- SCENE -- //
	Scene* scene = new Scene(1600, 900);
	
	// -- FACE -- //

		// -- Rectangle Background -- //
		Rectangle2D* background = new Rectangle2D(1600, 900, Point2D(0, 0), Color(COLOR_DARKCYAN));
		scene->addShape(background);

		// -- Hair Rectangle -- //
		Rectangle2D* hair = new Rectangle2D(455, 170, Point2D(120, 530), Color(COLOR_BLACK));
		scene->addShape(hair);

		// -- Head Circle -- //
		Circle2D* head = new Circle2D(270, Point2D(350, 400), Color(COLOR_TAN));
		scene->addShape(head);;

		// -- Left Eyebrow Rectangle -- //
		Rectangle2D* leftEyebrow = new Rectangle2D(100, 25, Point2D(200, 500), Color(COLOR_BLACK));
		scene->addShape(leftEyebrow);

		// -- Right Eyebrow Rectangle -- //
		Rectangle2D* rightEyebrow = new Rectangle2D(100, 25, Point2D(400, 500), Color(COLOR_BLACK));
		scene->addShape(rightEyebrow);

		// -- Left Eye Circle -- //
		Circle2D* leftEye = new Circle2D(50, Point2D(250, 450), Color(COLOR_CORNFLOWERBLUE));
		scene->addShape(leftEye);

		// -- Right Eye Circle -- //
		Circle2D* rightEye = new Circle2D(50, Point2D(450, 450), Color(COLOR_CORNFLOWERBLUE));
		scene->addShape(rightEye);

		// -- Nose Triangle -- //
		Triangle2D* nose = new Triangle2D(Point2D(0, 0), 
		Point2D(70, 0), Point2D(30, 125), Point2D(315, 325), Color(COLOR_WHITE));
		
		scene->addShape(nose);

		// -- Mouth Square -- //
		Square2D* mouth = new Square2D(60, Point2D(320, 225), Color(COLOR_SALMON));
		scene->addShape(mouth);

		// -- Mouth Triangle Left -- //
		Triangle2D* leftSmile = new Triangle2D(Point2D(0, 0), 
		Point2D(150, -100), Point2D(150, -40), Point2D(170, 325), Color(COLOR_SALMON));
		
		scene->addShape(leftSmile);

		// -- Mouth Triangle Right -- //
		Triangle2D* rightSmile = new Triangle2D(Point2D(0, 0), 
		Point2D(-150, -100), Point2D(-150, -40), Point2D(530, 325), Color(COLOR_SALMON));
		
		scene->addShape(rightSmile);

	/**********************************************************************************************************/

	// -- COMPOUND SHAPE -- //
	CompositeShape* hand = new CompositeShape(Point2D(0, 0), Color(COLOR_TAN));

	// -- HAND -- //

		// -- Finger 1 Rectangle -- //
		Rectangle2D* finger1 = new Rectangle2D(40, 275, Point2D(760, 450), Color(COLOR_TAN));
		hand->addShape(finger1);

		// -- Finger 2 Rectangle -- //
		Rectangle2D* finger2 = new Rectangle2D(40, 275, Point2D(840, 500), Color(COLOR_TAN));
		hand->addShape(finger2);

		// -- Finger 3 Rectangle  -- //
		Rectangle2D* finger3 = new Rectangle2D(40, 275, Point2D(920, 520), Color(COLOR_TAN));
		hand->addShape(finger3);

		// -- Finger 4 Rectangle -- //
		Rectangle2D* finger4 = new Rectangle2D(40, 300, Point2D(1000, 450), Color(COLOR_TAN));
		hand->addShape(finger4);

		// -- Palm Circle-- //
		Circle2D* palm = new Circle2D(150, Point2D(900, 450), Color(COLOR_TAN));
		hand->addShape(palm);

	// -- Add hand to the scene -- //
	scene->addShape(hand);

	// -- DRAW / ANIMATE THE SCENE -- //
	scene->draw();
	scene->startEventLoop();
	scene->startAnimationTimer();
	scene->nextFrame();
	scene->stopAnimationTimer();

	return EXIT_SUCCESS;
}