#pragma once
#include "DespenserContent.h"
#include "IKitchenAppliance.h"

//Конекретный декоратор - сладкая начинка
class DespenserWithSweetStuffing : public DespenserContent
{
public:
	virtual void actionEnable();
	virtual void actionDisable();
	DespenserWithSweetStuffing(IKitchenAppliance* despenser) : DespenserContent(despenser) {};
	~DespenserWithSweetStuffing() {};
};

