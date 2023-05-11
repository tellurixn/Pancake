#pragma once
#include "Breakfast.h"

class IBreakfastMaker
{
public:
	virtual Breakfast* MakeBreakfast() = 0;
};

