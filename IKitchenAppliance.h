#pragma once
#include <iostream>
#include <string>
#include "CompositeDevice.h"
using namespace std;

class IKitchenAppliance
{

public:
	string name;
	IKitchenAppliance() {};
	IKitchenAppliance(string name) { this->name = name; };
	virtual void actionEnable() = 0; // ��������� �� ����� ����������
	virtual void actionDisable() = 0; // ��������� �� ����� ����������

};

