#pragma once
#include <string>
using namespace std;

class IBakery
{
private:
	string name;
	int cost;
	string content;
protected:
	void SetName(string name);
	void SetCost(int cost);
	void SetContent(string content);
public:
	void show();
};

