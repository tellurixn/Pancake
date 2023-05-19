#pragma once
#include "Order.h"
class IState;
class StateNoOrder;

class OrderMaker
{
private:
	Order* order;
	IState* currentState;
public:
	OrderMaker(Order* order);
	void SetState(IState* state) { this->currentState = state; };
	IState* GetState() { return this->currentState; };
	void SetOrder(Order* order) { this->order = order; };
	Order* GetOrder() { return this->order; };
	void GetNewOrder();
	void MakeOrder();
	void DeleteMyOrder();
};

class IState
{
public:
	virtual void MakeNewOrder(OrderMaker* orderMaker) = 0;
	virtual void DeleteOrder(OrderMaker* orderMaker) = 0;
};

class StateHaveOrder : public IState {
public:
	void MakeNewOrder(OrderMaker* orderMaker);
	void DeleteOrder(OrderMaker* orderMaker);

};

class StateNoOrder : public IState {
	void MakeNewOrder(OrderMaker* orderMaker);
	void DeleteOrder(OrderMaker* orderMaker);
};
