#include "BWPrinter.h"
#include "Check.h"

Printout* BWPrinter::StartPrinting(string data)
{
    return new Check(data);
}
