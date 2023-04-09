#pragma once
#include "Device.h"
#include <iostream>

class LeafDevice : public Device
{
public:
	LeafDevice(string _name, string _size) :Device(_name, _size) {};

	virtual void Display() {
		printf("%s, %s\n", DeviceName.data(), Size.data());
	}
	virtual void Composition() {
		printf("CLEAR %s", DeviceName.data());
	}
	virtual string SizeOfDevice() {
		return Size;
	};
	virtual void PrintName() {
		cout << this->DeviceName << endl;
	};
};

