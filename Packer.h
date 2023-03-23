#pragma once
#include "IKitchenAppliance.h"
class Packer:public IKitchenAppliance
{
public:
    Packer() :IKitchenAppliance("Packer") {};
    virtual void actionEnable();
    virtual void actionDisable();
};

