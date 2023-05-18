#include "Order.h"


Order::Order(string userOrder)
{
	this->userOrder = userOrder;
	cout << "�����| ��������������� ��� - : " << this->userOrder << endl;
}

void Order::MakeOrder()
{
	string userValue;

	cout << "������� �����: ";
	cin >> userValue;

	userOrder = userValue;
	cout << "�����| �� �����: " << userOrder << endl;
}

void Order::ShowCurrentOrder()
{
	cout << "������� �����: " << this->userOrder << endl;
}

IMemento* Order::Save()
{
	return new ConcreteMemento(this->userOrder);
}

void Order::Restore(IMemento* memento)
{
	this->userOrder = memento->State();
	cout << "�����| ������������ ��������� �����: " << this->userOrder << "\n";
}
