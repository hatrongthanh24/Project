#include "SquareParser.h"
#include<sstream>
#include"Square.h"

using namespace std;
IShape* SquareParser::parse(string token)
{
	double a;
	string side, tmp;
	stringstream ss(token);
	getline(ss, tmp, '=');
	getline(ss, side);
	a = stod(side);

	return new Square(a);
}