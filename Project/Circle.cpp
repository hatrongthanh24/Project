#include "Circle.h"
#include<iostream>
#include<sstream>
#include<sstream>
using namespace std;
Circle::Circle(double r)
{
	_r = r;
}
string Circle::toString()
{
	stringstream ss;
	ss << "Circle: Radius=" << _r;
	return ss.str();
}

double Circle::area()
{
	return 3.14 * _r * _r;
}

double Circle::perimeter()
{
	return 3.14 * (_r + _r);
}
