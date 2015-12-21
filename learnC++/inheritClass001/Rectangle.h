#pragma once
#include "shape.h"

class Rectangle :
	public Shape
{
public:
	Rectangle(void);
	Rectangle(double x, double y);
	~Rectangle(void);

private:
	double x;
	double y;

	void calculateArea(void);
};
