#include "SquareParser.h"
#include<sstream>
#include"Square.h"

using namespace std;
shared_ptr<IShape> SquareParser::parse(string token)
{
	double a;
	string side, tmp;
	stringstream ss(token);
	getline(ss, tmp, '=');
	getline(ss, side);
	a = stod(side);

	return make_shared< Square>(a);
}
