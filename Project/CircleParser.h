#pragma once
#include"IParsable.h"
#include"IShape.h"
class CircleParser :public IParsable {
public:
	IShape* parse(string);
};