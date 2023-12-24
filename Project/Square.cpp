#include "Square.h"

void Square::accept(shared_ptr<IDisplayer> displayer) {
	displayer->displaySquare(shared_from_this());
}

Square::Square(double a)
{
	_a = a;
}

double Square::getSide() {
	return _a;
}

double Square::calculateArea()
{
	return _a * _a;
}

double Square::calculatePerimeter()
{
	return 4 * _a;
}
