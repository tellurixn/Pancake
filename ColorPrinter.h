#pragma once
#include "Printer.h"
class ColorPrinter : public Printer
{
public:
	ColorPrinter() : Printer() {};

	virtual Printout* StartPrinting(string data);
};

