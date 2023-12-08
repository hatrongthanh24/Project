#include "Square.h"
#include<sstream>
Square::Square(double a)
{
	_a = a;
}
string Square::toString()
{
	stringstream ss;
	ss << "Square: Side=" << _a;
	return ss.str();
}
double Square::area()
{
	return _a * _a;
}

double Square::perimeter()
{
	return 4 * _a;
}
