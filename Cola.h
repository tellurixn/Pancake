#pragma once
#include "CarbonatedDrinks.h"
#include <iostream>
using namespace std;

class Cola :
    public CarbonatedDrinks
{
public:
    Cola();
    Cola(int cost, string name) : CarbonatedDrinks(cost, name) { cout << "Кола" << endl; };

    Drinks* Clone();
};

