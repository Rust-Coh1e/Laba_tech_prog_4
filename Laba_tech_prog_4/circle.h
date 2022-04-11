#pragma once
#include "figure.h"

class Circle : public Figure
{
private:
	float radius;
public:
	Circle();
	Circle(float rad);
	Circle(const Circle& copy_circle);
	virtual ~Circle();

	virtual float square();
	virtual int checkfig();
	virtual void show();
};
