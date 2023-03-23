#pragma once
#include "Bot.h"

class HelperBot : public Bot
{
public:
	string Name;
	virtual void Read(string * s);
	virtual void ReadList(vector<string> * list);
	HelperBot(string Name);
};

