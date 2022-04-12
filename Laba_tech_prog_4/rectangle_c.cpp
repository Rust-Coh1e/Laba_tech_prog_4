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

	cout << "�������������:\t" << a << "\t" << b <<"\t" << "\t�������\t" << this->square() << endl;
}

void Rectangle::redact()
{
	int c;
	float a1;
	//system("cls");
	cout << "�������������" << endl;
	cout << "1. ������" << endl;
	cout << "2. ������" << endl;
	cout << "3. �����" << endl;
	cout << "-->";
	cin >> c;
	cout << "������� ��������" << endl;
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
	cout << "�������������� ����������!" << endl;
}

void Rectangle::printf(ofstream &path)
{
	path << this->a << " " << this->b << " ";
}