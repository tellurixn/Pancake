#pragma once
#include "ICoffee.h"
#include "IBakery.h"

class Breakfast
{
private:
	ICoffee* coffee;
	IBakery* bakery;
public:
	void show();
	Breakfast(ICoffee * coffee, IBakery * bakery);
	~Breakfast() {};
};

