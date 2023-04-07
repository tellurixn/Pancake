#include "CompositeDevice.h"

void CompositeDevice::Display()
{
	for (list<Device*>::iterator iter = children.begin(); iter != children.end(); iter++)
		(*iter)->Display();
	printf("\n");
}

void CompositeDevice::Composition()
{
	for (list<Device*>::iterator iter = children.begin(); iter != children.end(); iter++)
		(*iter)->Composition();
	printf("\n");
}


void CompositeDevice::SizeOfDevice()
{
	for (list<Device*>::iterator iter = children.begin(); iter != children.end(); iter++)
		(*iter)->Composition();
	printf("\n");

}
