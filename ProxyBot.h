#pragma once
#include "Bot.h"
#include "HelperBot.h"

using namespace std;

class ProxyBot : public Bot
{
private:
	HelperBot* helper;
	void log() { cout << "Бот: " << helper->Name << endl; };
public:
	virtual void Read(string * s) {
		log();
		helper->Read(s);
	};
	virtual void ReadList(vector<string>* list) {
		log();
		for (int i = 0; i < list->size(); i++)
			cout << list->at(i) << endl;
	};
	ProxyBot(string Name) {
		helper = new HelperBot(Name);
	};
	~ProxyBot() {
		delete helper;
	}
};

