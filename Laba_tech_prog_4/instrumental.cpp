#include <iostream>
#include <fstream>
#include <cmath>
#include <locale>
#include <string>

#include "inst.h"

using namespace std;

void showAll(Figure**& Arr, int kol)
{

	for (int i = 0; i < kol; i++)
	{
		cout << i + 1 << " ";
		Arr[i]->show();
	}

};

void addEl(Figure**& Arr, int kol,  int a, int b, int h)
{
	Figure** buff = new Figure * [kol + 1];
	for (int i = 0; i < kol; i++)
	{
		buff[i] = Arr[i];
	}
	buff[kol] = new Trapetion(a, b, h);
	delete[] Arr;
	Arr = buff;
}

void addEl(Figure**& Arr, int kol, int r)
{
	Figure** buff = new Figure * [kol + 1];
	for (int i = 0; i < kol; i++)
	{
		buff[i] = Arr[i];
	}
	buff[kol] = new Circle(r);
	delete[] Arr;
	Arr = buff;
}

//Tringle add
void addEl(Figure**& Arr, int kol, int a, int b)
{
	Figure** buff = new Figure * [kol + 1];
	for (int i = 0; i < kol; i++)
	{
		buff[i] = Arr[i];
	}
	buff[kol] = new Rtringle(a, b);
	delete[] Arr;
	Arr = buff;
}

void addElrec(Figure**& Arr, int kol, int a, int b)
{
	Figure** buff = new Figure * [kol + 1];
	for (int i = 0; i < kol; i++)
	{
		buff[i] = Arr[i];
	}
	buff[kol] = new Rectangle(a, b);
	delete[] Arr;
	Arr = buff;
}

void delEl(Figure**& Arr, int kol, int ind)
{
	Figure** buff = new Figure * [kol - 1];
	int j = 0;
	for (int i = 0; i < kol; i++)
	{
		if (i == ind) continue;
		buff[j] = Arr[i];
		j++;
	}
	delete[] Arr;
	Arr = buff;
}

void redswitch(Figure**& Arr, int kol, int ind)
{
	Arr[ind]->redact();
}