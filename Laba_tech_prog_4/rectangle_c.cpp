#include <iostream>
#include <locale>
#include "rectangle.h"

using namespace std;
Rectangle::Rectangle(): a(0.0), b(0.0) {}

Rectangle::Rectangle(float a1, float b1)
{
	a = a1;
	b = b1;
}

Rectangle::~Rectangle() {}

float Rectangle::square()
{
	return a * b;
}

int Rectangle::checkfig() { return 3; }

void Rectangle::show()
{
	setlocale(LC_ALL, "Rus");

	cout << "Прямоугольник: " << a << " " << b << "Площадь " << this->square() << endl;
}