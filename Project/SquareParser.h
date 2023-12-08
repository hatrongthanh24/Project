#pragma once
#include"IParsable.h"
#include"IShape.h"
class SquareParser :public IParsable {
public:
	IShape* parse(string);
};