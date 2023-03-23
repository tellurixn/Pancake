#pragma once
#include "IKitchenAppliance.h"

class Plate : public IKitchenAppliance
{
public:
    Plate() :IKitchenAppliance("Plate") {};
    virtual void actionEnable();
    virtual void actionDisable();

};

