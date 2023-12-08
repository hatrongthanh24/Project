#pragma once
#include<string>
#include<iostream>
using namespace std;
class IShape {
private:
public:

	virtual string toString();
	virtual double area() = 0;
	virtual double perimeter() = 0;
};
