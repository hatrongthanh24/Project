#pragma once
#include"IShape.h"
#include<string>
using namespace std;
class IParsable {
public:
	virtual shared_ptr<IShape> parse(string);

};