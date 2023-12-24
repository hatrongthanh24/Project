#include "Circle.h"
#include<iostream>
#include<sstream>
#include<sstream>
using namespace std;

void Circle::accept(shared_ptr<IDisplayer> displayer) {
	displayer->displayCircle(shared_from_this());
}

Circle::Circle(double r)
{
	_r = r;
}

double Circle::calculateArea()
{
	return 3.14 * _r * _r;
}

double Circle::calculatePerimeter()
{
	return 3.14 * (_r + _r);
}
double Circle::getRadius() {
	return _r;
}
