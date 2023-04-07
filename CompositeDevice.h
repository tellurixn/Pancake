#pragma once
#include "Device.h"
#include <list>

class CompositeDevice: public Device
{
	list<Device*> children;
	bool mypred(string* s1, string* s2) {
		return strcmp(s1->data(), s2->data()) != 0;
	}
public:
	void Add(Device* leaf) {
		children.push_back(leaf);
	}
	void Remove(Device* leaf) {
		children.remove(leaf);
	}
	virtual void Display();
	virtual void Composition();
	virtual void SizeOfDevice();
};

