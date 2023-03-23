#pragma once
#include "IKitchenAppliance.h"
class Scales:public IKitchenAppliance
{
public:
    Scales() :IKitchenAppliance("Scales") {};
    virtual void actionEnable();
    virtual void actionDisable();
};

