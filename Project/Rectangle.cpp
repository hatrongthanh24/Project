#include "Rectangle.h"
#include<sstream>
#include<iostream>
#include <memory>
using namespace std;

void Rectangle::accept(shared_ptr<IDisplayer> displayer) {
	displayer->displayRectangle(shared_from_this());
}

Rectangle::Rectangle(double w, double h)
{
	_w = w;
	_h = h;
}

double Rectangle::getWidth() {
	return _w;
}

double Rectangle::getHeight() {
	return _h;
}

double Rectangle::calculateArea()
{
	return _w * _h;
}

double Rectangle::calculatePerimeter()
{
	return 2 * (_w + _h);
}
