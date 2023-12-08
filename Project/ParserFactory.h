#pragma once
#include"IParsable.h"
#include"CircleParser.h"
#include"RectangleParser.h"
#include"SquareParser.h"
class ParserFactory {
public:
	IParsable* create(string type);
	;
};