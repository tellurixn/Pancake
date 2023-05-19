#include "SystemPower.h"

void SystemPower::Attach(Observer* obs)
{
	this->observer = obs;
}

void SystemPower::SetValue(bool value)
{
	this->value = value;
	this->Notify();
}

bool SystemPower::GetValue()
{
	return this->value;
}

void SystemPower::Notify()
{
	this->observer->Update();
}

SystemPower* Observer::GetSubject()
{
	return this->model;
}

Observer::Observer(SystemPower* systemPower)
{
	this->model = systemPower;
	systemPower->Attach(this);
}

PowerObserver::PowerObserver(SystemPower* mod) : Observer(mod)
{

}

void PowerObserver::Update()
{
	bool isActive = this->GetSubject()->GetValue();
	if (isActive) {
		cout << "������� �������� �������������� �� �������." << endl;
	}
	else {
		cout << "������� ������� ���������. ������� ��������� �������������." << endl;
	}
}
