#pragma once
#include <vector>
#include <string>
#include <fstream>
#include <memory>
using namespace std;


#ifdef SHAPELOADER_EXPORTS
#define SHAPELOADER_API __declspec(dllexport)
#else
#define SHAPELOADER_API __declspec(dllimport)
#endif


class ShapeLoader {
private:
	inline static shared_ptr <ShapeLoader>_instance = nullptr;

private:
	ShapeLoader();
public:
	SHAPELOADER_API static shared_ptr<ShapeLoader> instance();
	SHAPELOADER_API vector<string> loadShape(string);
};



