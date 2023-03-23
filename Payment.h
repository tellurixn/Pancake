#pragma once
#include <list>
#include <vector>
#include <string>
using namespace std;
class Payment
{
private:
	vector<int> Price;
public:
	Payment();
	void SetPrice(int money);
	void ShowPriceList();
	void ShowPrice(int Id);
	int Make(int Money, int Id);
	void Check(int value);
};

