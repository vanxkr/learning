#include "Shape.h"

Shape::Shape(void) {
	area = 0;
}

Shape::~Shape(void) {
}

void Shape::show(void) {
	cout << "The area is: " << area << endl;
}