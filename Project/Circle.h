#pragma once
#include"IShape.h"



class Circle :public IShape, public enable_shared_from_this<Circle> {
private:
	double _r;

public:
	Circle(double);
public:
	void accept(shared_ptr<IDisplayer> visitor);
	double calculateArea();
	double calculatePerimeter();
	double getRadius();

};