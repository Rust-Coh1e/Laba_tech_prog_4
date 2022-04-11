#pragma once
#include "figure.h"

class Trapetion : public Figure
{
private:
	float a;
	float b;
	float h;
public:
	Trapetion();
	Trapetion(float a1, float b1, float h1);
	Trapetion(const Trapetion& copy_trapetion);
	virtual ~Trapetion();
	virtual float square();
	virtual void show();
	virtual int checkfig();
	
};