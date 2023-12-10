#pragma once
#include<string>
#include"IShape.h"
using namespace std;
class Circle :public IShape {
private:
	double _r;

public:
	//~Circle();
	Circle(double);
	string toString();
public:
	double area();
	double perimeter();

};