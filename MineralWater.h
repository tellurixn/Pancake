#pragma once
#include "CarbonatedDrinks.h"
#include <iostream>
using namespace std;

class MineralWater :
    public CarbonatedDrinks
{
public:
    MineralWater();
    MineralWater(int cost, string name) : CarbonatedDrinks(cost,name) { cout << "����������� ����" << endl; };
    
    Drinks* Clone();
};

