#pragma once
#include <string>
using namespace std;
class ICoffee
{
private:
	int cost;
	string name;
protected:
	void SetCost(int cost);
	void SetName(string name);
public:
	void show();
};

