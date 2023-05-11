#include "ColorPrinter.h"
#include "Flyer.h"

Printout* ColorPrinter::StartPrinting(string data)
{
    return new Flyer(data);
}
