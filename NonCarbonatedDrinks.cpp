#include "NonCarbonatedDrinks.h"

NonCarbonatedDrinks::NonCarbonatedDrinks()
{
}

Drinks* NonCarbonatedDrinks::Clone()
{
    return new NonCarbonatedDrinks(*this);
}
