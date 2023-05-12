#include "Cola.h"

Cola::Cola()
{
	cout << "Кола" << endl;
}

Drinks* Cola::Clone()
{
	return new Cola(*this);
}
