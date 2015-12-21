#pragma once

#include <iostream>
using namespace std;

class Shape
{
public:
	Shape(void);
	~Shape(void);

	void show(void);

protected:
	double area;
};
