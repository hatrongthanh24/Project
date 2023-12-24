#pragma once
#include "IDisplayer.h"
class NormalDisplayer :public IDisplayer {
public:
	void displayCircle(shared_ptr<Circle> )override;
	void displaySquare(shared_ptr<Square> )override;
	void displayRectangle(shared_ptr<Rectangle>) override;
};