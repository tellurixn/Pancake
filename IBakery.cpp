#include "IBakery.h"
#include <iostream>
using namespace std;

void IBakery::SetName(string name)
{
	this->name = name;
}

void IBakery::SetCost(int cost)
{
	this->cost = cost;
}

void IBakery::SetContent(string content)
{
	this->content = content;
}

void IBakery::show()
{
	cout << "�������: " << name << endl << "���������: " << cost << endl <<
		"�������: " << content << endl;
}
