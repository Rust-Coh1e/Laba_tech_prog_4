#include<iostream>
#include <locale>
#include "rtringle.h"

using namespace std;

Rtringle::Rtringle(): a(0.0), b(0.0) { counter++; }

Rtringle::Rtringle(float a1, float b1)
{
	counter++;
	a = a1;
	b = b1;
}

Rtringle::Rtringle(const Rtringle& copy_Rtringle)
{
	a = copy_Rtringle.a;
	b = copy_Rtringle.b;
}

Rtringle::~Rtringle() { counter--; };

float Rtringle::square()
{
	return a * b / 2;
}

int Rtringle::checkfig() { return 2; }

void Rtringle::show()
{
	setlocale(LC_ALL, "Rus");
	cout << "Пр.треугольник:\t" << a << "\t" << b << "\t\tПлощадь\t" << this->square() << endl;
}

void Rtringle::redact()
{
	int c;
	float a1;
	//system("cls");
	cout << "Прямоугольный треугольник" << endl;
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

void Rtringle::printf(ofstream &path)
{
	path << this->a << " " << this->b << " ";
}