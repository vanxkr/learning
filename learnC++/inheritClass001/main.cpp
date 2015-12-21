#include <iostream>
#include "Shape.h"
#include "Cricle.h"
#include "Rectangle.h"
#include "Trapezoid.h"

using namespace std;

int main()
{
	Shape shape;
	shape.show();

	Cricle cricle(10);
	cricle.show();

	Rectangle rectangle(3, 4);
	rectangle.show();

	Trapezoid trapezoid(4, 5, 6);
	trapezoid.show();

	return 0;
}