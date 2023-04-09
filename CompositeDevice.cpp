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
	MyList<Device*>::superIterator iter = children.begin();

	cout << "Большие по размеру устройства:" << endl;
	for (; iter != children.end(); iter++) {
		if((*iter)->field->SizeOfDevice() == "big")
			(*iter)->field->PrintName();
	}
	cout << "Средние по размеру устройства:" << endl;
	for (iter = children.begin(); iter != children.end(); iter++) {
		if ((*iter)->field->SizeOfDevice() == "middle")
			(*iter)->field->PrintName();
	}
	cout << "Маленькие по размеру устройства:" << endl;
	for (iter = children.begin(); iter != children.end(); iter++) {
		if ((*iter)->field->SizeOfDevice() == "small")
			(*iter)->field->PrintName();
	}
	printf("\n");
}

void CompositeDevice::PrintName()
{
	for (MyList<Device*>::superIterator iter = children.begin(); iter != children.end(); iter++) {
		(*iter)->field->PrintName();
	}
	printf("\n");
}


