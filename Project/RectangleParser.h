#pragma once
#include"IParsable.h"
#include"IShape.h"
class RectangleParser :public IParsable {
public:
	tuple<bool, shared_ptr<IShape>>parse(string token);
	string keyword();
};