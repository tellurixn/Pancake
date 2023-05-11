#pragma once
#include "Printout.h"

class Check : public Printout
{
private:
	int price = NULL;
public:
	Check(string info) : Printout(info) {};
	virtual void Display();
	void SetPrice(int price);

};

