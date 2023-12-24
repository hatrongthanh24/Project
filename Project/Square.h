#pragma once
#include "IShape.h"

class Square :public IShape, public enable_shared_from_this<Square> {
private:
	double _a;

public:
	//~Square();
	Square(double);
public:
	void accept(shared_ptr<IDisplayer>);
	double calculateArea();
	double calculatePerimeter();
	double getSide();
};