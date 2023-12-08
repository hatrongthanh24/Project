#pragma once
#include"IParsable.h"
#include"IShape.h"
class RectangleParser :public IParsable {
public:
	IShape* parse(string);
};