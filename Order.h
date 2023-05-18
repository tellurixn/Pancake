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
    
    // Сохраняет текущее состояние внутри снимка.
    IMemento* Save();
    
    // Восстанавливает состояние из объекта снимка.
    void Restore(IMemento* memento);
    
};


