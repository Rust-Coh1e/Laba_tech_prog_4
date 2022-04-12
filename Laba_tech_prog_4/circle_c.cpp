#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <locale>
#include <fstream>
#include "circle.h"

using namespace std;

Circle::Circle() : radius(0.0) { counter++; }

Circle::Circle(float rad)
{
	counter++;
	radius = rad;
}

Circle::Circle(const Circle& copy_circle)
{
	radius = copy_circle.radius;
}

Circle::~Circle() 
{
	counter--;
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

	cout << "Круг:\t\t\t" << radius << "\t\t\t" << "Площадь\t" << this->square() << endl;
}

void Circle::redact()
{
	int c;
	float a1;
	//system("cls");
	cout << "Прямоугольник" << endl;
	cout << "1. Радиус" << endl;
	cout << "2. Выход" << endl;
	cout << "-->";
	cin >> c;
	cout << "Введите значение" << endl;
	cin >> a1;
	switch (c)
	{
	case 1:
		this->radius = a1;
		break;
	case 2:
		break;
	default:
		break;
	}
	cout << "Редактирование завершенно!" << endl;
}

void Circle::printf(ofstream &path)
{
	path << this->radius << " ";
}