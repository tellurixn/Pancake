#include "Drinks.h"
#include <iostream>
using namespace std;

Drinks::Drinks()
{
	this->cost = 50;
	this->name = "�������";
}

Drinks::Drinks(int cost, string name)
{
	this->cost = cost;
	this->name = name;
}



Drinks::Drinks(const Drinks* drink)
{
	this->cost = drink->cost;
	this->name = drink->name;
}

void Drinks::ShowCost()
{
	cout << "���������: " << cost << endl;
}

void Drinks::ShowName()
{
	cout << name << endl;
}
