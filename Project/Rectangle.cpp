#include "Rectangle.h"
#include<sstream>
#include<iostream>

Rectangle::Rectangle(double w, double h)
{
	_w = w;
	_h = h;
}
string Rectangle::toString()
{
	stringstream ss;
	ss << "Rectangle: Width=" << _w << ",Height=" << _h;
	return ss.str();
}

double Rectangle::area()
{
	return _w * _h;
}

double Rectangle::perimeter()
{
	return 2 * (_w + _h);
}
