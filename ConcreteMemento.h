#pragma once
#include "IMemento.h"


class ConcreteMemento : public IMemento
{
private:
    string state;

public:
    ConcreteMemento(string state);


    /**
     * ��������� ���������� ���� �����, ����� ��������������� ��� ���������.
     */
    string State();
  
};

