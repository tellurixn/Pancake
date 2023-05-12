#pragma once
#include "NonCarbonatedDrinks.h"
#include <iostream>
using namespace std;

class Tea :
    public NonCarbonatedDrinks
{
public:
    Tea();
    Tea(int cost, string name) : NonCarbonatedDrinks(cost, name) { cout << "×àé" << endl; };

    Drinks* Clone();
};

