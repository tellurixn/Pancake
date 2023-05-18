#pragma once
#include "IMemento.h"


class ConcreteMemento : public IMemento
{
private:
    string state;

public:
    ConcreteMemento(string state);


    /**
     * Создатель использует этот метод, когда восстанавливает своё состояние.
     */
    string State();
  
};

