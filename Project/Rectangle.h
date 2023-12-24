#pragma once
#include "IShape.h"


class Rectangle :public IShape, public enable_shared_from_this<Rectangle> {
private:
	double _w;
	double _h;

public:
	//~Rectangle();
	Rectangle(double, double);
public:
	void accept(shared_ptr<IDisplayer> visitor);
	double calculateArea();
	double calculatePerimeter();
	double getWidth();
	double getHeight();
};
