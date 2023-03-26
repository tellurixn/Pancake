#include "DespenserWithDough.h"

void DespenserWithDough::actionEnable()
{
	despenser->actionEnable();
	cout << "Начинка дозатора: тесто" << endl;
}

void DespenserWithDough::actionDisable()
{
	despenser->actionDisable();
	cout << "Тесто в дозаторе закончилось" << endl;
}
