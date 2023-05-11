#include "LatteWithDonutMaker.h"
#include "Latte.h"
#include "Donut.h"

Breakfast* LatteWithDonutMaker::MakeBreakfast()
{
	Latte* latte = new Latte();
	Donut* donut = new Donut();
	return new Breakfast((ICoffee*)latte, (IBakery*)donut);
}
