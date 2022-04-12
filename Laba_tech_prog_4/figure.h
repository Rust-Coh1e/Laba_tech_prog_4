#pragma once
#include <fstream>

class Figure
{
public:
	static int counter;
	Figure() {};
	virtual ~Figure() {};
	virtual float square() = 0;
	virtual void show() = 0;
	virtual void printf(std::ofstream &path) = 0;
	virtual int checkfig() = 0;
	//virtual void showAll(Figure**& Arr, int kol);
	virtual void redact() = 0;
};