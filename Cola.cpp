#include "Cola.h"

Cola::Cola()
{
	cout << "����" << endl;
}

Drinks* Cola::Clone()
{
	return new Cola(*this);
}
