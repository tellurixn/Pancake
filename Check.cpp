#include "Check.h"
#include <iostream>

void Check::Display()
{

	cout << endl << infoForUser << endl
		<< "Вы оплатили заказ" << endl;
	if (price != NULL) {
		cout << "Сумма заказа: " <<  price << "руб." << endl;
	}
}

void Check::SetPrice(int price)
{
	this->price = price;
}
