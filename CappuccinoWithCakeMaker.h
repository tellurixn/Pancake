#pragma once
#include "IBreakfastMaker.h"
class CappuccinoWithCakeMaker : public IBreakfastMaker
{
public:
	virtual Breakfast *MakeBreakfast();
	CappuccinoWithCakeMaker() {};
	~CappuccinoWithCakeMaker() {};
};

