#pragma once
#include"IShape.h"
#include<string>
#include <tuple>
#include <regex>
using namespace std;
class IParsable {
public:
	virtual tuple<bool, shared_ptr<IShape>> parse(string) = 0;
	virtual string keyword() = 0;
};