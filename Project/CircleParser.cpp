#include "CircleParser.h"
#include<sstream>
#include"Circle.h"
IShape* CircleParser::parse(string token)
{
	double r;
	string radius, tmp;
	stringstream ss(token);
	getline(ss, tmp, '=');
	getline(ss, radius);
	r = stod(radius);
	return new Circle(r);
}