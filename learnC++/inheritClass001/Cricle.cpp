#include "Cricle.h"

Cricle::Cricle(void):PI(3.1415927) { 
	Cricle(0);
}

Cricle::Cricle(int radius):PI(3.1415927) {
	Shape::Shape();
	this->radius = radius;
	calculateArea();
}

Cricle::~Cricle(void) {
}

void Cricle::calculateArea() {
	area = PI * radius * radius;
}