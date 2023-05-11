#include "Breakfast.h"

void Breakfast::show()
{
	coffee->show();
	bakery->show();
}

Breakfast::Breakfast(ICoffee* coffee, IBakery* bakery)
{
	this->coffee = coffee;
	this->bakery = bakery;
}
