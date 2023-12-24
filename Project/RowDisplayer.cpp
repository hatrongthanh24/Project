#include "RowDisplayer.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"

RowDisplayer::RowDisplayer(vector <int>v) {
	rowWidths = v;
}

void RowDisplayer::displayCircle(shared_ptr<Circle> c) {
	stringstream result;
	result << setw(rowWidths[0]) << "Circle" << "|" << setw(rowWidths[1]) << "Perimeter=" << c->calculatePerimeter() << "|" << setw(rowWidths[2]) << "Area=" << c->calculateArea();
	cout<< result.str();

}

void RowDisplayer::displaySquare(shared_ptr<Square> s) {
	stringstream result;
	result << setw(rowWidths[0]) << "Square" << "|" << setw(rowWidths[1]) << "Perimeter=" << s->calculatePerimeter() << "|" << setw(rowWidths[2]) << "Area=" << s->calculateArea();
	cout<< result.str();

}

void RowDisplayer::displayRectangle(shared_ptr<Rectangle> r) {
	stringstream result;
	result << setw(rowWidths[0]) << "Rectangle" << "|" << setw(rowWidths[1]) << "Perimeter=" << r->calculatePerimeter() << "|" << setw(rowWidths[2]) << "Area=" << r->calculateArea();
	cout<< result.str();

}