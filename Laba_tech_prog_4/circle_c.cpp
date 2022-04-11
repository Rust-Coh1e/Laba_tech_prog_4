#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <locale>
#include "circle.h"

using namespace std;

Circle::Circle() : radius(0.0) {}

Circle::Circle(float rad)
{
	radius = rad;
}

Circle::Circle(const Circle& copy_circle)
{
	radius = copy_circle.radius;
}

Circle::~Circle() 
{
	delete this;
}

float Circle::square()
{
	return M_PI * radius * radius;
}

int Circle::checkfig() { return 4; }

void Circle::show()
{
	setlocale(LC_ALL, "Rus");

	cout << "Круг: " << radius << "Площадь" << this->square() << endl;
}