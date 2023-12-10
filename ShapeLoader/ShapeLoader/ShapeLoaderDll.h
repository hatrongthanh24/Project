#pragma once
#include <vector>
#include <string>
#include <fstream>
using namespace std;


#ifdef SHAPELOADERDLL_EXPORTS
#define SHAPELOADERDLL_API __declspec(dllexport)
#else
#define SHAPELOADERDLL_API __declspec(dllimport)
#endif

namespace Utils {
	class ShapeLoader {
	public:
		static SHAPELOADERDLL_API vector<string> loadShape(string);
	};

}

