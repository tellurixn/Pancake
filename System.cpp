#include "System.h"
#include <iostream>
using namespace std;

System::System()
{
	
}

void System::SetActiveDevice(IKitchenAppliance * device) {
	this->device = device;
}

void System::SetBot(Bot* bot)
{
	this->bot = bot;
}

void System::SetPayment(Payment * payment)
{
	this->payment = payment;
}

void System::SetDropoff(Dropoff* dropoff)
{
	this->dropoff = dropoff;
}

void System::SetRecipe(vector<string> * recipe)
{
	this->recipe = recipe;
}

void System::SetSubmitter(Adapter* submitter)
{
	this->submitter = submitter;
}


void System::ShowRecipeList()
{
	bot->ReadList(recipe);
	
}

void System::ShowPriceList()
{
	payment->ShowPriceList();
}

int System::MakeAPayment(int money, int id)
{

	return payment->Make(money, id);
	
}

void System::Enable() {
	device->actionEnable();
}

void System::Disable() {
	device->actionDisable();
}


void System::Give()
{
	dropoff->Give();
}

void System::ServeCutlery()
{
	submitter->Give();
}

