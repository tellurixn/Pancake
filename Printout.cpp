#include "Printout.h"
#include <iostream>



void Printout::Display()
{
	cout << infoForUser << endl;
}

Printout::Printout(string  infoForUser)
{
	this->infoForUser = infoForUser;
}

string Printout::GetData()
{
	return infoForUser;
}
