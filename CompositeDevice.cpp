#include "CompositeDevice.h"
#include <iostream>

void CompositeDevice::Display()
{
	for (MyList<Device*>::superIterator iter = children.begin(); iter != children.end(); iter++) {
		(*iter)->field->Display();
	}
	printf("\n");
}

void CompositeDevice::Composition()
{
	for (MyList<Device*>::superIterator iter = children.begin(); iter != children.end(); iter++)
		(*iter)->field->Composition();
	printf("\n");
}


string CompositeDevice::SizeOfDevice()
{
	string result = "";
	for (MyList<Device*>::superIterator iter = children.begin(); iter != children.end(); iter++)
		result += (*iter)->field->SizeOfDevice() + "\n";
	return result;
}

void CompositeDevice::SortBySize()
{
	ShowBigDevices();
	ShowMiddleDevices();
	ShowSmallDevices();
	cout << endl;
}

void CompositeDevice::ShowBigDevices()
{
	cout << "Большие устройства:" << endl;
	for (MyList<Device*>::superIterator iter = children.begin(); iter != children.end(); iter++) {
		if ((*iter)->field->SizeOfDevice() == "big")
			(*iter)->field->PrintName();
	}
	cout << endl;
}

void CompositeDevice::ShowMiddleDevices()
{
	cout << "Средние устройства:" << endl;
	for (MyList<Device*>::superIterator iter = children.begin(); iter != children.end(); iter++) {
		if ((*iter)->field->SizeOfDevice() == "middle")
			(*iter)->field->PrintName();
	}
	cout << endl;
}

void CompositeDevice::ShowSmallDevices()
{
	cout << "Маленькие устройства:" << endl;
	for (MyList<Device*>::superIterator iter = children.begin(); iter != children.end(); iter++) {
		if ((*iter)->field->SizeOfDevice() == "small")
			(*iter)->field->PrintName();
	}
	cout << endl;
}

void CompositeDevice::PrintName()
{
	for (MyList<Device*>::superIterator iter = children.begin(); iter != children.end(); iter++) {
		(*iter)->field->PrintName();
	}
	printf("\n");
	cout << endl;
}


