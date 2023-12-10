#pragma once
#include"IParsable.h"
#include"IShape.h"
class RectangleParser :public IParsable {
public:
	shared_ptr<IShape> parse(string);
};