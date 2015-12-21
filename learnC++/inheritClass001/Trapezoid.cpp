#include "Trapezoid.h"

Trapezoid::Trapezoid(void)
{
	Trapezoid(1, 2, 3);
}

Trapezoid::Trapezoid(double upBase, double downBase, double high) {
	Shape::Shape();
	this->upBase = upBase;
	this->downBase = downBase;
	this->high = high;
	calculateArea();
}

Trapezoid::~Trapezoid(void)
{
}

void Trapezoid::calculateArea() {
	area = (upBase + downBase) * high;
}