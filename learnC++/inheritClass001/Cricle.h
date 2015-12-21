#pragma once
#include "shape.h"

class Cricle :
	public Shape
{
public:
	Cricle(void);
	Cricle(int radius);
	~Cricle(void);


private:
	double radius;
	const double PI;

	void calculateArea(void);
};
