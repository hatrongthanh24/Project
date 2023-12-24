#include "CircleParser.h"
#include<sstream>
#include"Circle.h"

tuple<bool, shared_ptr<IShape>> CircleParser::parse(string token)
{
	bool success = true;
	string radius;
	string tmp;
	double r;
	stringstream ss(token);

	regex pattern("\\d+");

	getline(ss, tmp, '=');
	getline(ss, radius);


	if (regex_match(radius, pattern) == false) {
		success = false;
		auto result = make_tuple(success, nullptr);
		return result;
	}

	r = stod(radius);
	shared_ptr <IShape>circle = make_shared<Circle>(r);
	auto result = make_tuple(success,circle );
	return result;
}

string CircleParser::keyword() {
	return "Circle";
}