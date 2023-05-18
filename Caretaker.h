#pragma once
#include <iostream>
#include <string>
#include "Order.h"
#include <vector>
using namespace std;

//����� ������
class Caretaker
{
private:
    vector<IMemento*> mementos;

    Order* order;

public:
    Caretaker(Order* order);

    //��������� ���������
    void Backup();
    //������ ���������, ������� ���������� ���������
    void Undo();

    //�������� ��� ����������� ���������
    void ShowHistory();

};

