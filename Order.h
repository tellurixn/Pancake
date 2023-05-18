#pragma once
#include <iostream>
#include <string>
#include "ConcreteMemento.h"


using namespace std;

class Order
{
private:
    string userOrder;
public:
    Order(string userOrder);
    
    void MakeOrder();

    void ShowCurrentOrder();
    
    // ��������� ������� ��������� ������ ������.
    IMemento* Save();
    
    // ��������������� ��������� �� ������� ������.
    void Restore(IMemento* memento);
    
};


