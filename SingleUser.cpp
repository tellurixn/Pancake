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
	cout << "Пользователь: " << name << endl;
}

SingleUser* SingleUser::instance = NULL;

SingleUser* SingleUser::Instance(string name) {
    if (instance == 0) {
        cout << "Новый пользователь" << endl;
        instance = new SingleUser(name);
    }
    else
        cout << "Системой уже пользуется один человек!" << endl;
    return instance;
}

SingleUser* SingleUser::Instance() {
    if (instance == 0) {
        cout << "Новый пользователь" << endl;
        instance = new SingleUser();
    }
    else
        cout << "Системой уже пользуется один человек!" << endl;
    return instance;
}