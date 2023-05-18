#include "Order.h"


Order::Order(string userOrder)
{
	this->userOrder = userOrder;
	cout << "Заказ| инициализирован как - : " << this->userOrder << endl;
}

void Order::MakeOrder()
{
	string userValue;

	cout << "Введите заказ: ";
	cin >> userValue;

	userOrder = userValue;
	cout << "Заказ| вы ввели: " << userOrder << endl;
}

void Order::ShowCurrentOrder()
{
	cout << "Текущий заказ: " << this->userOrder << endl;
}

IMemento* Order::Save()
{
	return new ConcreteMemento(this->userOrder);
}

void Order::Restore(IMemento* memento)
{
	this->userOrder = memento->State();
	cout << "Заказ| восстановлен следующий заказ: " << this->userOrder << "\n";
}
