#pragma once
#include <vector>
#include <list>
#include "Bot.h"
#include "Dropoff.h"
#include "Payment.h"
#include "IKitchenAppliance.h"
#include "Adapter.h"

class System
{
private:
	vector<string> * recipe;
	Bot * bot;
	Payment * payment;
	Dropoff * dropoff;
	IKitchenAppliance * device;
	Adapter* submitter;

public:
	System();
	void SetActiveDevice(IKitchenAppliance * device);
	void SetBot(Bot* bot);
	void SetPayment(Payment * payment);
	void SetDropoff(Dropoff* dropoff);
	void SetRecipe(vector<string> * recipe);
	void SetSubmitter(Adapter * submitter);
	void ShowRecipeList();
	void ShowPriceList();
	int MakeAPayment(int money, int id);
	void Enable();
	void Disable();
	void Give();
	void ServeCutlery();
};

