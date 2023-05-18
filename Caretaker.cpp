#include "Caretaker.h"

Caretaker::Caretaker(Order* order)
{
	this->order = order;
}

void Caretaker::Backup()
{
	cout << "������| �������� �����..." << endl;
	this->mementos.push_back(this->order->Save());
}

void Caretaker::Undo()
{
    if (!this->mementos.size()) {
        return;
    }
    IMemento* memento = this->mementos.back();
    this->mementos.pop_back();

    cout << "������| �������������� ��������: " << memento->State() << endl;

    try {
        this->order->Restore(memento);
    }
    catch (...) {
        this->Undo();
    }
}

void Caretaker::ShowHistory()
{
    cout << "\n������| ������� ���������:" << endl;
    for (IMemento* memento : this->mementos) {
        cout << memento->State() << endl;
    }
    cout << endl;
}
