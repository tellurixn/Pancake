#pragma once
#include "Drinks.h"
#include <iostream>
using namespace std;

class NonCarbonatedDrinks :
    public Drinks
{
public:
    NonCarbonatedDrinks();
    NonCarbonatedDrinks(int cost, string name) : Drinks(cost, name) { cout << "Негазированый напиток" << endl; };
    Drinks* Clone();
};

