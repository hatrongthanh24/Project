#include "RectangleParser.h"
#include"Rectangle.h"
#include<sstream>

tuple<bool,shared_ptr<IShape>> RectangleParser::parse(string token)
{   
    bool success = true;
    string tmp;
    double w, h;
    string width, height;
    stringstream ss(token);
	
	regex pattern("\\d+");
    
	getline(ss, tmp, '=');
    getline(ss, width, ',');
   
    getline(ss, tmp, '=');
    getline(ss, height);
    
	if (regex_match(height, pattern) == false || regex_match(width, pattern) == false) {
		success = false;
		auto result = make_tuple(success,nullptr);
		return result;
	}

	h = stod(height);
	w = stod(width);
	shared_ptr <IShape>rectangle = make_shared<Rectangle>(w,h);
	auto result = make_tuple(success, rectangle);
	return result;
}


string RectangleParser::keyword() {
	return "Rectangle";
}