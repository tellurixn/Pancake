#pragma once
#include "IKitchenAppliance.h"
class Despenser:public IKitchenAppliance
{
public:
    Despenser():IKitchenAppliance("Despenser") {};
    virtual void actionEnable();
    virtual void actionDisable();
};

