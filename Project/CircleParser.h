#pragma once
#include"IParsable.h"
#include"IShape.h"
class CircleParser :public IParsable {
public:
	tuple<bool, shared_ptr<IShape>> parse(string);
	string keyword();
};