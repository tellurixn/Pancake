#include "Tea.h"

Tea::Tea()
{
	cout << "���" << endl;
}

Drinks* Tea::Clone()
{
	return new Tea(*this);
}
