#pragma once
#include"IShape.h"
#include<string>
using namespace std;
class IParsable {
public:
	virtual IShape* parse(string);

};