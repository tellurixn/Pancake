#pragma once
#include <string>

using namespace std;
class Device
{
protected:
	string DeviceName;
	string Size;
public:
	Device() {};
	Device(string _device, string _size) {
		DeviceName = _device;		
		Size = _size;
	}
	virtual void Display() = 0;
	virtual void Composition() = 0;
	virtual string SizeOfDevice() = 0;
	virtual void PrintName() = 0;
	

};

