#include "Juice.h"

Juice::Juice()
{
	cout << "���" << endl;
}

Drinks* Juice::Clone()
{
	return new Juice(*this);
}
