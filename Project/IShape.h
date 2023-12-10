#pragma once
#include<string>
#include<iostream>
#include<memory>
using namespace std;
class IShape {
private:
public:

	virtual string toString();
	virtual double area() = 0;
	virtual double perimeter() = 0;
};
