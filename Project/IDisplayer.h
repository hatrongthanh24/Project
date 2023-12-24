#pragma once
#include <sstream>
#include <iomanip>
#include<string>
#include<iostream>
#include<memory>
using namespace std;
class IShape;
class Circle;
class Square;
class Rectangle;

class IDisplayer {
public:
	virtual void displayCircle(std::shared_ptr<Circle> circle) = 0;
	virtual void displaySquare(std::shared_ptr<Square> square) = 0;
	virtual void displayRectangle(std::shared_ptr<Rectangle> rectangle) = 0;

};