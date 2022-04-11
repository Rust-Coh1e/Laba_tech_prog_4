#include <iostream>
#include <fstream>
#include <cmath>
#include <locale>
#include <string>
#include "figure.h"
#include "circle.h"
#include "rectangle.h"
#include "rtringle.h"
#include "trapetion.h"


using namespace std;
/*Создать абстрактный базовый класс с виртуальной функцией «Площадь». Создать
производные классы «Прямоугольник», «Круг», «Прямоугольный треугольник», «Трапеция» со
своими функциями площади и переменными. Для проверки определить массив ссылок на
абстрактный класс, которым присваиваются адреса различных объектов.
*/
void addEl(Figure**& Arr, int kol);
//void showAll(Figure**& Arr, int kol);



int main()
{
	setlocale(LC_ALL, "Rus");
//Тут первый выбор откуда будут взята информация
	
	int c;
	int kol = 0;
	int type = 0;
	Figure** ARR = 0;

	cout << "Будем ли мы брать данные из файлов?" << endl;
	cout << "1 - Да" << endl;
	cout << "2 - Нет" << endl;
	cout << "0 - Выход из программы" << endl;
	cout << "--> ";
	cin >> c;


	system("cls");
	switch (c)
	{
	case 1:
	{
		//считывание трапеции из файла
		string path = "source\\trapetion.txt";
		ifstream source_tr;
		source_tr.open(path);
		if (!source_tr.is_open())
		{
			cout << "Файл не был открыт" << endl;
		}
		
		//Trapetion* AR1 = 0;
		//Trapetion 1, Rtringle 2, Rectangle 3, Circle 4

		source_tr >> kol;
		if (kol == 0) { cout << "Файл записи пуст" << endl;  break; }
		
		ARR = new Figure * [kol];
		float a, b, c;

		for (int i = 0; i < kol; i++) 
		{
			
			source_tr >> type;
			switch (type)
			{
			case 1:
			{
				source_tr >> a >> b >> c;
				ARR[i] = new Trapetion(a, b, c);
				break;
			}
			case 2:
			{
				source_tr >> a >> b;
				ARR[i] = new Rtringle(a, b);
				break;
			}
			case 3:
			{
				source_tr >> a >> b;
				ARR[i] = new Rectangle(a, b);
				break;
			}
			case 4:
			{
				source_tr >> a;
				ARR[i] = new Circle(a);
				break;
			}
			default: break;
			}

			

		}

		//if (kol > 0) ARR = new Figure * [kol];
		////if (c_tr > 0) AR1 = new Trapetion[c_tr];

		//for (int i = 0; i < c_tr; i++)
		//{
		//	source_tr >> a >> b >> c;
		//	ARR[i] = new Trapetion(a, b, c);
		//	//ARR[i] = &AR1[i];
		//	cout << a << " " << b << " " << c << " square " << ARR[i]->square() << endl;
		//}

	}
	

	}

		

	return 0;
}

void addEl(Figure**& Arr, int kol)
{
	Figure** buff = new Figure * [kol + 1];
	float a, b, c;

	for (int i = 0; i < kol; i++)
	{
		buff[i] = Arr[i];
	}
	cout << "Input a b c >> ";
	cin >> a >> b >> c;

	buff[kol] = new Trapetion(a, b, c);
	delete[] Arr;
	Arr = buff;
}

//void showAll(Figure**& Arr, int kol)
//{
//	for (int i = 0; i < kol; i++)
//	{
//		Arr[i]->show();
//	}
//}


