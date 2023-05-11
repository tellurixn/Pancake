#pragma once
#include "Device.h"
#include <list>
#include "MyList.h"

class CompositeDevice: public Device
{
	MyList<Device*> children;
	
public:
	void Add(Device* leaf);
	void Remove(Device* leaf);

	virtual void Display();
	virtual void Composition();
	virtual string SizeOfDevice();
	virtual void PrintName();
	void SortBySize();
	void ShowBigDevices();
	void ShowMiddleDevices();
	void ShowSmallDevices();
};

