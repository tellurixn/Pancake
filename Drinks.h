#pragma once
#include <string>
using namespace std;

class Drinks
{
	string name;
	int cost;
public:
	Drinks();
	Drinks(int cost, string name);
	Drinks(const Drinks *drink);
	virtual void ShowCost();
	virtual void ShowName();
	virtual Drinks *Clone() = 0;
};

