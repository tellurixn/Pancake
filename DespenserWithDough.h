#pragma once
#include "DespenserContent.h"
#include "IKitchenAppliance.h"

//���������� ��������� - �����
class DespenserWithDough : public DespenserContent
{
public:
	virtual void actionEnable();
	virtual void actionDisable();
	DespenserWithDough(IKitchenAppliance* despenser) : DespenserContent(despenser) {};
	~DespenserWithDough() {};
};

