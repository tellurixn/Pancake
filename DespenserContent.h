#pragma once
#include <iostream>
#include <string>
#include "IKitchenAppliance.h"

//Декоратор
class DespenserContent : public IKitchenAppliance
{
protected:
	IKitchenAppliance * despenser;
public:
	virtual void actionEnable() = 0; 
	virtual void actionDisable() = 0; 
	DespenserContent(IKitchenAppliance* despenser);
	~DespenserContent() {};
};

