#include "Payment.h"
#include <iostream>
#include <vector>

using namespace std;

Payment::Payment()
{

}

void Payment::SetPrice(int money)
{
	Price.push_back(money);
}

void Payment::ShowPriceList()
{
	for (int i = 0; i < Price.size(); i++) {

		cout << i + 1 << ")" << Price.at(i) << " ���." << endl;
	}
}

void Payment::ShowPrice(int Id) {
	cout << "Price to pay" << Price.at(Id) << endl;
}

int Payment::Make(int Money, int Id) {

	if (Money == Price.at(Id)) {
		cout << "������ ������ �������!" << endl;
		return 0;
	}
	else {
		cout << "������ �� ������!" << endl;
		return 1;
	}

}
