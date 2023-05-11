#pragma once
#include <string>
using namespace std;

class Printout
{
protected:
	string infoForUser;
public:
	virtual void Display();
	Printout(string infoForUser);
	string GetData();
};

