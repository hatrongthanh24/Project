#include "Triangle.h"

Triangle::Triangle(double s1, double s2, double s3)
{
	_s1 = s1;
	_s2 = s2;
	_s3 = s3;
}

string Triangle::toString()
{
	stringstream ss;
	ss << "Triangle: s1= " << _s1 << ", s2= " << _s2 << ", s3= " << _s3;
	return ss.str();
}

double Triangle::area()
{
	double p = this->perimeter() / 2;
	return sqrt(p * (p - _s1) * (p - _s2) * (p - _s3));
}

double Triangle::perimeter()
{
	return _s1 + _s2 + _s3;
}
