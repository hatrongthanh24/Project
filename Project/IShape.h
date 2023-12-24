#pragma once
#include<string>
#include<iostream>
#include<memory>
using namespace std;
#include "IDisplayer.h"
class IShape {
public:
	virtual void accept(shared_ptr<IDisplayer> visitor) = 0;
	virtual double calculateArea()=0;
	virtual double calculatePerimeter()=0;
};
