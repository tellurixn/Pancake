#pragma once
#include "IKitchenAppliance.h"
class Scapula :
    public IKitchenAppliance
{
public:
    Scapula() :IKitchenAppliance("Scapula") {};
    virtual void actionEnable(); 
    virtual void actionDisable(); 
};

