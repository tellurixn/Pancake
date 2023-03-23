#pragma once
#include <string>
#include <vector>
using namespace std;

//Класс, для которого создается proxy
class Bot
{
public:
	virtual void Read(string * s) = 0;
	virtual void ReadList(vector<string> * list) = 0;
};

