#pragma once
#include"IParsable.h"
#include"CircleParser.h"
#include"RectangleParser.h"
#include"SquareParser.h"
#include <map>
#include <vector>


class ParserFactory {
private:
	inline static shared_ptr<ParserFactory>_instance = nullptr;
	map<string, shared_ptr<IParsable>>_services;	
private:
	ParserFactory();
public:
	~ParserFactory();
	static shared_ptr<ParserFactory> instance();
	shared_ptr<IParsable> create(string type);
};
