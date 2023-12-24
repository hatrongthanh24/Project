#include "NormalDisplayer.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
void NormalDisplayer::displayCircle(shared_ptr<Circle> c) {
	stringstream result;
	result << "Circle: Radius="<<c->getRadius() ;
	cout<< result.str();
}

void NormalDisplayer::displaySquare(shared_ptr<Square> s) {
	stringstream result;
	result <<  "Square: Side="<<s->getSide() ;
	cout<< result.str();

}

void NormalDisplayer::displayRectangle(shared_ptr<Rectangle> r) {
	stringstream result;
	result <<  "Rectangle: Width=" <<r->getWidth()<<", Height="<<r->getHeight();
	cout<< result.str();
}