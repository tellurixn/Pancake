#pragma once
#include "Device.h"
#include <iostream>

class LeafDevice : public Device
{
public:
	LeafDevice(string _name, string _size) :Device(_name, _size) {};

	virtual void Display();
	virtual void Composition();
	virtual string SizeOfDevice();
	virtual void PrintName();
};

