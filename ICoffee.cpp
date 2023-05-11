#include "ICoffee.h"
#include <iostream>
using namespace std;

void ICoffee::SetCost(int cost)
{
	this->cost = cost;
}

void ICoffee::SetName(string name)
{
	this->name = name;
}

void ICoffee::show()
{
	cout << "Кофе: " << name << endl << "Стоимость: " << cost << endl;
}
