#pragma once
#include "shape.h"

class Trapezoid :
	public Shape
{
public:
	Trapezoid(void);
	Trapezoid(double upBase, double downBase, double high);
	~Trapezoid(void);

private:
	double upBase;
	double downBase;
	double high;

	void calculateArea(void);
};
