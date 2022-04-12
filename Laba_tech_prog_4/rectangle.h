#pragma once
#include "figure.h"

class Rectangle : public Figure
{
private:
	float a;
	float b;
public:
	Rectangle();
	Rectangle(float a1, float b1);
	virtual ~Rectangle();
	virtual float square();
	virtual int checkfig();
	virtual void show();
	virtual void redact();
	virtual void printf(std::ofstream &path);



};