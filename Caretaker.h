#pragma once
#include <iostream>
#include <string>
#include "Order.h"
#include <vector>
using namespace std;

//Класс опекун
class Caretaker
{
private:
    vector<IMemento*> mementos;

    Order* order;

public:
    Caretaker(Order* order);

    //Сохранить состояние
    void Backup();
    //Отмена изменения, возврат последнего состояния
    void Undo();

    //Показать все сохраненные изменения
    void ShowHistory();

};

