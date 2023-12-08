#include "RectangleParser.h"
#include"Rectangle.h"
#include<sstream>
IShape* RectangleParser::parse(string token)
{
	string tmp;
	double w, h;
	string width, height;
	stringstream ss(token);;
	getline(ss, tmp, '=');
	getline(ss, width, ',');
	w = stod(width);
	getline(ss, tmp, '=');
	getline(ss, height);
	h = stod(height);
	return new Rectangle(w, h);
}