#pragma once
#include "figure.h"

class Rtringle : public Figure
{
private:
	float a;
	float b;
public:
	Rtringle();
	Rtringle(float a1, float b1);
	Rtringle(const Rtringle& copy_Rtringle);
	virtual ~Rtringle();
	virtual float square();
	virtual int checkfig();
	virtual void show();
	virtual void redact();
	virtual void printf(std::ofstream &path);

};