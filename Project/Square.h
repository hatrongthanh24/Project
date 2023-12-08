#include<string>
using namespace std;
#pragma once
#include"IShape.h"
class Square :public IShape {
private:
	double _a;

public:
	~Square();
	Square(double);
	string toString();
public:
	double area();
	double perimeter();

};