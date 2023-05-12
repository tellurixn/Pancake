#include "Juice.h"

Juice::Juice()
{
	cout << "Сок" << endl;
}

Drinks* Juice::Clone()
{
	return new Juice(*this);
}
