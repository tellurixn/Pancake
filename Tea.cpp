#include "Tea.h"

Tea::Tea()
{
	cout << "×àé" << endl;
}

Drinks* Tea::Clone()
{
	return new Tea(*this);
}
