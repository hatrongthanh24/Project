#pragma once
#include<vector>
#include"IShape.h"
class ShapeSorter {
public:
	
	void sortByPerimeter(vector<IShape*>&);
	void sortByArea(vector<IShape*>&);
};