#include "CompositeDevice.h"
#include <iostream>

//void CompositeDevice::Display()
//{
//	for (list<Device*>::iterator iter = children.begin(); iter != children.end(); iter++)
//		(*iter)->Display();
//	printf("\n");
//}
void CompositeDevice::Display()
{
	for (MyList<Device*>::superIterator iter = children.begin(); iter != children.end(); iter++) {
		(*iter)->field->Display();
	}
	printf("\n");
}
//void CompositeDevice::Composition()
//{
//	for (list<Device*>::iterator iter = children.begin(); iter != children.end(); iter++)
//		(*iter)->Composition();
//	printf("\n");
//}
void CompositeDevice::Composition()
{
	for (MyList<Device*>::superIterator iter = children.begin(); iter != children.end(); iter++)
		
	printf("\n");
}
//void CompositeDevice::SizeOfDevice()
//{
//	for (list<Device*>::iterator iter = children.begin(); iter != children.end(); iter++)
//		(*iter)->Composition();
//	printf("\n");
//
//}

void CompositeDevice::SizeOfDevice()
{
	for (MyList<Device*>::superIterator iter = children.begin(); iter != children.end(); iter++)
		//(*iter)->Composition();
	printf("\n");

}