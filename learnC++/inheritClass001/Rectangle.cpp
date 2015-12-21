#include "Rectangle.h"

Rectangle::Rectangle(void)
{
	Rectangle(0, 0);
}

Rectangle::Rectangle(double x, double y) {
	Shape::Shape();
	this->x = x;
	this->y = y;
	calculateArea();
}

Rectangle::~Rectangle(void)
{
}

void Rectangle::calculateArea() {
	area = x * y;
}