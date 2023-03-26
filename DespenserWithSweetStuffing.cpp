#include "DespenserWithSweetStuffing.h"

void DespenserWithSweetStuffing::actionEnable()
{
	despenser->actionEnable();
	cout << "Ќачинка дозатора: сладка€ начинка" << endl;
}

void DespenserWithSweetStuffing::actionDisable()
{
	despenser->actionDisable();
	cout << "—ладка€ начинка в дозаторе закончилось" << endl;
}
