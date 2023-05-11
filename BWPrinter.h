#pragma once
#include "Printer.h"

class BWPrinter : public Printer
{
public:
	BWPrinter() : Printer() {};
	virtual Printout* StartPrinting(string data);
};

