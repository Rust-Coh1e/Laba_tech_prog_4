#include <iostream>
#include <fstream>
#include <cmath>

#include "trapetion.h"

using namespace std;

Trapetion::Trapetion(): a(0.0), b(0.0), h(0.0) {}

Trapetion::Trapetion(float a1, float b1, float h1)
{
	a = a1;
	b = b1;
	h = h1;
}

Trapetion::Trapetion(const Trapetion& copy_Trapetion)
{
	a = copy_Trapetion.a;
	b = copy_Trapetion.b;
	h = copy_Trapetion.h;
}

Trapetion::~Trapetion() {};

float Trapetion::square()
{
	return 0.5 * (a + b) * h;
}

int Trapetion::checkfig() { return 1; }

void Trapetion::show()
{
	cout << "Трапеция: " << a << " " << b << " " << h << "square " << this->square() << endl;
}