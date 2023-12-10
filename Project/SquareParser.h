#pragma once
#include"IParsable.h"
#include"IShape.h"
class SquareParser :public IParsable {
public:
	shared_ptr<IShape> parse(string);
};