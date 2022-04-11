#include<iostream>
#include <locale>
#include "rtringle.h"

using namespace std;

Rtringle::Rtringle(): a(0.0), b(0.0) {}

Rtringle::Rtringle(float a1, float b1)
{
	a = a1;
	b = b1;
}

Rtringle::Rtringle(const Rtringle& copy_Rtringle)
{
	a = copy_Rtringle.a;
	b = copy_Rtringle.b;
}

Rtringle::~Rtringle() {};

float Rtringle::square()
{
	return a * b / 2;
}

int Rtringle::checkfig() { return 2; }

void Rtringle::show()
{
	setlocale(LC_ALL, "Rus");
	cout << "Прямоугольный треугольник: " << a << " " << b << "square " << this->square() << endl;
}