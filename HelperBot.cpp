#include "HelperBot.h"
#include <iostream>
using namespace std;

void HelperBot::Read(string * s)
{
	cout << s << endl;
}

void HelperBot::ReadList(vector<string>* list)
{
	for (int i = 0; i < list->size(); i++)
		cout << list->at(i) << endl;
}

HelperBot::HelperBot(string Name) {
	this->Name = Name;
}
