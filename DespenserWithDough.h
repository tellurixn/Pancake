#pragma once
#include "DespenserContent.h"
#include "IKitchenAppliance.h"

//Конкретный декоратор - тесто
class DespenserWithDough : public DespenserContent
{
public:
	virtual void actionEnable();
	virtual void actionDisable();
	DespenserWithDough(IKitchenAppliance* despenser) : DespenserContent(despenser) {};
	~DespenserWithDough() {};
};

