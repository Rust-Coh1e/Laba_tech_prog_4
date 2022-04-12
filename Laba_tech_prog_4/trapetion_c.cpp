#include <iostream>
#include <fstream>
#include <cmath>

#include "trapetion.h"

using namespace std;

Trapetion::Trapetion(): a(0.0), b(0.0), h(0.0) { counter++; }

Trapetion::Trapetion(float a1, float b1, float h1)
{
	counter++;
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

Trapetion::~Trapetion() { counter--; };

float Trapetion::square()
{
	return 0.5 * (a + b) * h;
}

int Trapetion::checkfig() { return 1; }

void Trapetion::show()
{
	cout << "Трапеция:\t\t" << a << "\t" << b << "\t" << h << "\tПлощадь\t" << this->square() << endl;
}


void Trapetion::redact()
{
	int c;
	float a1;
	//system("cls");
	cout << "Трапеция" << endl;
	cout << "1. Основание 1" << endl;
	cout << "2. Основание 2" << endl;
	cout << "3. Высота" << endl;
	cout << "4. Выход" << endl;
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
		this->h = a1;
		break;
	case 4:
		break;
	default:
		break;
	}
	cout << "Редактирование завершенно!" << endl;
}

void Trapetion::printf(ofstream &path)
{
	path << this->a << " " << this->b << " " << this->h << " ";
}