#include "CarbonatedDrinks.h"

CarbonatedDrinks::CarbonatedDrinks()
{

}

Drinks* CarbonatedDrinks::Clone()
{
	return new CarbonatedDrinks(*this);
}
