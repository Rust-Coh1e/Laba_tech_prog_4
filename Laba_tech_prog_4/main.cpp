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
#include "inst.h"



using namespace std;
/*Создать абстрактный базовый класс с виртуальной функцией «Площадь». Создать
производные классы «Прямоугольник», «Круг», «Прямоугольный треугольник», «Трапеция» со
своими функциями площади и переменными. Для проверки определить массив ссылок на
абстрактный класс, которым присваиваются адреса различных объектов.
*/


int Figure::counter = 0;

int main()
{
	setlocale(LC_ALL, "Rus");
//Тут первый выбор откуда будут взята информация
	
	int c;
	int m;
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
		//считывание информации из файла
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
		break;
		source_tr.close();
	}
	case 2:
	{
		cout << "Сколько элементов вы хотите добавить?\n";
		cout << "--> ";
		cin >> kol;
		system("cls");
		ARR = new Figure * [kol];


		float a, b, c;

		for (int i = 0; i < kol; i++)
		{
			cout << "Какую фигуры вы хотите добавить?" << endl;
			cout << "1. Трапеция" << endl;
			cout << "2. Прямоугольный треугольник" << endl;
			cout << "3. Прямоугольник" << endl;
			cout << "4. Круг" << endl;
			cout << "--> ";
			cin >> type;
			cout << endl;

			switch (type)
			{
			case 1:
			{
				cout << "Введите оба основания и высоту" << endl;
				cin >> a >> b >> c;
				ARR[i] = new Trapetion(a, b, c);
				break;
			}
			case 2:
			{
				cout << "Введите значение катетов" << endl;
				cin >> a >> b;
				ARR[i] = new Rtringle(a, b);
				break;
			}
			case 3:
			{
				cout << "Введите значение ширины и высоты" << endl;
				cin >> a >> b;
				ARR[i] = new Rectangle(a, b);
				break;
			}
			case 4:
			{
				cout << "Введите радиус" << endl;
				cin >> a;
				ARR[i] = new Circle(a);
				break;
			}
			default: break;
			}
			system("cls");
		}

		break;

	}

	}

	cout << "Итоговая очередь" << endl;

	cout << Figure::counter << endl;

	int flag = 1;

	while (flag == 1)
	{
		showAll(ARR, kol);
		cout << "Выберите операцию:" << endl;
		cout << "1 - Добавление элемент" << endl;
		cout << "2 - Удаление Элемент" << endl;
		cout << "3 - Редактирование элемент" << endl;
		cout << "0 - Выход" << endl;
		cout << "--> ";
		cin >> c;
		
		switch (c)
		{
		case 1:
		{
			system("cls");
			float a, b, c;
			cout << "Какую фигуры вы хотите добавить?" << endl;
			cout << "1. Трапеция" << endl;
			cout << "2. Прямоугольный треугольник" << endl;
			cout << "3. Прямоугольник" << endl;
			cout << "4. Круг" << endl;
			cout << "--> ";
			cin >> type;
			cout << endl;

			switch (type)
			{
			case 1:
			{
				cout << "Введите оба основания и высоту" << endl;
				cin >> a >> b >> c;
				addEl(ARR, kol, a, b, c);
				kol++;
				break;
			}
			case 2:
			{
				cout << "Введите значение катетов" << endl;
				cin >> a >> b;
				addEl(ARR, kol, a, b);
				kol++;
				break;
			}
			case 3:
			{
				cout << "Введите значение ширины и высоты" << endl;
				cin >> a >> b;
				addElrec(ARR, kol, a, b);
				kol++;
				break;
			}
			case 4:
			{
				cout << "Введите радиус" << endl;
				cin >> a;
				addEl(ARR, kol, a);
				kol++;
				break;
			}
			default: break;
			}
			system("cls");
			break;
		}
		case 2:
		{
			cout << "Введите номер элемента, который вы хотите удалить" << endl;
			cout << "--> ";
			cin >> type;

			delEl(ARR, kol, type - 1);
			kol--;
			Figure::counter--;
			system("cls");
			break;
		}
		case 3:
		{
			cout << "Введите номер элемента, который вы хотите изменить" << endl;
			cout << "--> ";
			cin >> type;

			redswitch(ARR, kol, type - 1);

			break;
		}
		case 0: {
			
			flag = 0;
			break;
		}
		default:
			cout << "\n";
			flag = 0;
			break;
		}
	}

	cout << "Хотите ли перезаписать данные в файл?" << endl;
	cout << "1. Перезаписать файл" << endl;
	cout << "2. Остановить файл в первозданном виду" << endl;
	cin >> type;
	if (type == 1)
	{
		ofstream path_out;
		path_out.open("source\\trapetion.txt");
		if (path_out.is_open())
		{
			path_out << Figure::counter << " ";
			for (int i = 0; i < Figure::counter; i++)
			{
				path_out << ARR[i]->checkfig() << " ";
				ARR[i]->printf(path_out);
			}
		}
		path_out.close();
	}

	return 0;
}



