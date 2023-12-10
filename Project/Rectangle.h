#pragma once
#include"IShape.h"
#include<string>
using namespace std;
class Rectangle :public IShape {
private:
	double _w;
	double _h;

public:
	//~Rectangle();
	Rectangle(double, double);
	string toString();
public:
	double area();
	double perimeter();

};
