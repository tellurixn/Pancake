#include "SingleUser.h"


SingleUser::SingleUser(string name)
{
	this->name = name;
}

SingleUser::SingleUser()
{
	this->name = "No name";
}

void SingleUser::Display()
{
	cout << "������������: " << name << endl;
}

SingleUser* SingleUser::instance = NULL;

SingleUser* SingleUser::Instance(string name) {
    if (instance == 0) {
        cout << "����� ������������" << endl;
        instance = new SingleUser(name);
    }
    else
        cout << "�������� ��� ���������� ���� �������!" << endl;
    return instance;
}

SingleUser* SingleUser::Instance() {
    if (instance == 0) {
        cout << "����� ������������" << endl;
        instance = new SingleUser();
    }
    else
        cout << "�������� ��� ���������� ���� �������!" << endl;
    return instance;
}