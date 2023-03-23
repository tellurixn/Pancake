#pragma once
#include "IKitchenAppliance.h"

class Fan : public IKitchenAppliance
{
public:
    Fan() :IKitchenAppliance("Fan") {};
    virtual void actionEnable();
    virtual void actionDisable();
};

