#pragma once
#include <iostream>
using namespace std;
class SingleUser
{
private:
	string name;
	static SingleUser* instance;
protected:
	SingleUser(string name);
	SingleUser();
public:
	static SingleUser* Instance(string name);
	static SingleUser* Instance();
	void Display();
	string GetName() { return this->name;  };

};

