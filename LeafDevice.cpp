#include "LeafDevice.h"

void LeafDevice::Display()
{
	printf("%s, %s\n", DeviceName.data(), Size.data());
}

void LeafDevice::Composition()
{
	printf("CLEAR %s", DeviceName.data());
}

string LeafDevice::SizeOfDevice()
{
	return Size;
}

void LeafDevice::PrintName()
{
	cout << this->DeviceName << endl;
}
