#pragma once
#include "NonCarbonatedDrinks.h"
#include <iostream>
using namespace std;

class Juice :
    public NonCarbonatedDrinks
{
public:
    Juice();
    Juice(int cost, string name) : NonCarbonatedDrinks(cost, name) { cout << "Сок" << endl; };

    Drinks* Clone();
};

