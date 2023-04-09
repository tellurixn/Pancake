#pragma once
#include "Device.h"
#include <list>
#include "MyList.h"

class CompositeDevice: public Device
{
	MyList<Device*> children;
	
	//list<Device*> children;
	bool mypred(string* s1, string* s2) {
		return strcmp(s1->data(), s2->data()) != 0;
	}
public:
	void Add(Device* leaf) {
		//children.push_back(leaf);
		children.Add(leaf);
	}
	void Remove(Device* leaf) {
		//children.remove(leaf);
		children.Delete(leaf);
	}
	virtual void Display();
	virtual void Composition();
	virtual void SizeOfDevice();
};

