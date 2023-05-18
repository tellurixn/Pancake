#include "Caretaker.h"

Caretaker::Caretaker(Order* order)
{
	this->order = order;
}

void Caretaker::Backup()
{
	cout << "Опекун| Сохраняю заказ..." << endl;
	this->mementos.push_back(this->order->Save());
}

void Caretaker::Undo()
{
    if (!this->mementos.size()) {
        return;
    }
    IMemento* memento = this->mementos.back();
    this->mementos.pop_back();

    cout << "Опекун| Восстановление значения: " << memento->State() << endl;

    try {
        this->order->Restore(memento);
    }
    catch (...) {
        this->Undo();
    }
}

void Caretaker::ShowHistory()
{
    cout << "\nОпекун| История изменений:" << endl;
    for (IMemento* memento : this->mementos) {
        cout << memento->State() << endl;
    }
    cout << endl;
}
