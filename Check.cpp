#include "Check.h"
#include <iostream>

void Check::Display()
{

	cout << endl << infoForUser << endl
		<< "�� �������� �����" << endl;
	if (price != NULL) {
		cout << "����� ������: " <<  price << "���." << endl;
	}
}

void Check::SetPrice(int price)
{
	this->price = price;
}
