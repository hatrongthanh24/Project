#include "NumberFormat.h"

string NumberFormat::thousandSeparator() {
	return _thoudsandSeparator;
}

int NumberFormat::precision() {
	return _precision;
}

NumberFormat::NumberFormat() {

}

NumberFormat::NumberFormat(string separator, int precision) {
	_thoudsandSeparator = separator;
	_precision = precision;
}