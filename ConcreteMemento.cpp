#include "ConcreteMemento.h"

ConcreteMemento::ConcreteMemento(string state)
{
	this->state = state;
}

string ConcreteMemento::State()
{
	return this->state;
}

