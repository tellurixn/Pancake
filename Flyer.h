#pragma once
#include "Printout.h"
class Flyer : public Printout
{

public:
	Flyer(string  info) : Printout(info) {};
	virtual void Display();
};

