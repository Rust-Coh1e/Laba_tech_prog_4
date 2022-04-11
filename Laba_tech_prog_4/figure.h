#pragma once

class Figure
{
public:
	Figure() {};
	virtual ~Figure() {};
	virtual float square() = 0;
	virtual void show() = 0;
	virtual int checkfig() = 0;
	
};