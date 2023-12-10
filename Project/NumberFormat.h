#pragma once
#include <string>
using std::string;

class NumberFormat {
private:
	string _thoudsandSeparator;
	int _precision;
public:
	NumberFormat();
	string thousandSeparator();
	int precision();
public:
	NumberFormat(string, int);
};
