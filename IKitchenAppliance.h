#pragma once
#include <iostream>
#include <string>
using namespace std;

class IKitchenAppliance
{
public:
	string Name;
	IKitchenAppliance(string s) { Name = s; }
	virtual void actionEnable() = 0; // ��������� �� ����� ����������
	virtual void actionDisable() = 0; // ��������� �� ����� ����������

};

