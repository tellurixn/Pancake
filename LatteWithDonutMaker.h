#pragma once
#include "IBreakfastMaker.h"

class LatteWithDonutMaker : public IBreakfastMaker
{
public:
	virtual Breakfast* MakeBreakfast();
	LatteWithDonutMaker() {};
	~LatteWithDonutMaker() {};
};

