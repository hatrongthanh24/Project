#pragma once
#include"IParsable.h"
#include"IShape.h"
class CircleParser :public IParsable {
public:
	shared_ptr<IShape> parse(string);
};