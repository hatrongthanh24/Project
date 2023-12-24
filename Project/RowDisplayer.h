#pragma once
#include <vector>
#include "IDisplayer.h"
#include "IShape.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
class RowDisplayer :public IDisplayer {
private:
	vector<int> rowWidths;
public:
	RowDisplayer(vector <int>);
	void displayCircle(shared_ptr<Circle> )override;
	void displaySquare(shared_ptr<Square> )override;
	void displayRectangle(shared_ptr<Rectangle>)override;
};