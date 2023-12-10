#pragma once
#include<vector>
#include"IShape.h"
class ShapeSorter {
public:
	void SortByPerimeter(vector<IShape*>&);
	void SortByArea(vector<IShape*>&);
};