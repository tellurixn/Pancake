#include "OrderMaker.h"

OrderMaker::OrderMaker(Order* order)
{
	SetOrder(order);
	SetState(new StateHaveOrder());
}

void OrderMaker::GetNewOrder()
{
	order->MakeOrder();
}

void OrderMaker::MakeOrder()
{
	this->currentState->MakeNewOrder(this);
}

void OrderMaker::DeleteMyOrder()
{
	this->currentState->DeleteOrder(this);
}

void StateHaveOrder::MakeNewOrder(OrderMaker* orderMaker)
{
	cout << "Начинаю готовить заказ..." << endl;
}

void StateHaveOrder::DeleteOrder(OrderMaker* orderMaker)
{
	cout << "Удаляю текущий заказ..." << endl;
	orderMaker->SetState(new StateNoOrder());
}

void StateNoOrder::MakeNewOrder(OrderMaker* orderMaker)
{
	string userOrder;
	cout << "Нет заказа для приготовления!" << endl;
	cout << "Введите новый заказ: ";
	cin >> userOrder;
	Order* newOrder = new Order(userOrder);
	orderMaker->SetOrder(newOrder);
	orderMaker->SetState(new StateHaveOrder());
	orderMaker->MakeOrder();
}

void StateNoOrder::DeleteOrder(OrderMaker* orderMaker)
{
	cout << "Нет заказа для удаления!" << endl;
}
