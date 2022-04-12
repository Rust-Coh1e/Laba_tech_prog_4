#include <iostream>
#include <locale>
#include "rectangle.h"

using namespace std;
Rectangle::Rectangle(): a(0.0), b(0.0) { counter++; }

Rectangle::Rectangle(float a1, float b1)
{
	counter++;
	a = a1;
	b = b1;
}

Rectangle::~Rectangle() { counter--; }

float Rectangle::square()
{
	return a * b;
}

int Rectangle::checkfig() { return 3; }

void Rectangle::show()
{
	setlocale(LC_ALL, "Rus");

	cout << "Прямоугольник:\t" << a << "\t" << b <<"\t" << "\tПлощадь\t" << this->square() << endl;
}

void Rectangle::redact()
{
	int c;
	float a1;
	//system("cls");
	cout << "Прямоугольник" << endl;
	cout << "1. Ширина" << endl;
	cout << "2. Высота" << endl;
	cout << "3. Выход" << endl;
	cout << "-->";
	cin >> c;
	cout << "Введите значение" << endl;
	cin >> a1;
	switch (c)
	{
	case 1:
		this->a = a1;
		break;
	case 2:
		this->b = a1;
		break;
	case 3:
		break;
	default:
		break;
	}
	cout << "Редактирование завершенно!" << endl;
}

void Rectangle::printf(ofstream &path)
{
	path << this->a << " " << this->b << " ";
}