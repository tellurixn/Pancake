#pragma once
#include "Drinks.h"
#include <iostream>
using namespace std;

class CarbonatedDrinks :
    public Drinks
{
public:
    CarbonatedDrinks();
    CarbonatedDrinks(int cost, string name) : Drinks(cost, name) { cout << "Газированый напиток" << endl; };
    Drinks* Clone();

};

