#pragma once
#include<string>
#include<sstream>
#include"IShape.h"

class Triangle:public IShape {
private:
	double _s1;
	double _s2;
	double _s3;
public:
	Triangle(double, double, double);
	string toString();
	double area();
	double perimeter();
};