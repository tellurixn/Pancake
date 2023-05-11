#include "CappuccinoWithCakeMaker.h"
#include "Cappuccino.h"
#include "Cake.h"

Breakfast* CappuccinoWithCakeMaker::MakeBreakfast()
{
	Cappuccino* cappuccino = new Cappuccino();
	Cake* cake = new Cake();
	return new Breakfast((ICoffee*)cappuccino, (IBakery*)cake);
}
