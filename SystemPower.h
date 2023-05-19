#pragma once
#include <iostream>
#include <string>
using namespace std;

class Observer;

class SystemPower
{
protected:
	Observer* observer;
	bool value;
public:
    void Attach(Observer* obs);
    void SetValue(bool value);
    bool GetValue();
    void Notify();
};

class Observer {
private:
    SystemPower* model;
protected:
    SystemPower* GetSubject();
public:
    Observer(SystemPower* systemPower);
    virtual void Update() = 0;
};

class PowerObserver : public Observer{
public:
    PowerObserver(SystemPower* mod);
    void Update();
};
