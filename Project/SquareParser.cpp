#include "SquareParser.h"
#include<sstream>
#include"Square.h"


tuple<bool, shared_ptr<IShape>> SquareParser::parse(string token)
{
	bool success = true;
	string side;
	string tmp;
	double a;
	stringstream ss(token);

	regex pattern("\\d+");

	getline(ss, tmp, '=');
	getline(ss, side);
	

	if (regex_match(side, pattern) == false) {
		success = false;
		auto result = make_tuple(success, nullptr);
		return result;
	}

	a = stod(side);
	shared_ptr <IShape>square = make_shared<Square>(a);
	auto result = make_tuple(success,square );
	return result;
}
string SquareParser::keyword() {
	return "Square";
}
