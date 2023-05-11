#pragma once
#include "Printout.h"
class Printer
{
private:
	Printout * printObject;
public:
	Printer() {};

	virtual Printout* StartPrinting(string data) = 0;
};

