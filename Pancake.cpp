#include <iostream>
#include <locale>
#include "System.h"
#include "Plate.h"
#include "Despenser.h"
#include "Fan.h"
#include "Scales.h"
#include "Scapula.h"
#include "Packer.h"
#include "ProxyBot.h"
#include "HelperBot.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    //Создание основных компонентов системы
    Bot * helperBot = new ProxyBot("Helper");

    Payment * paymentDevice = new Payment();
    Dropoff * dropoffDevice = new Dropoff();
    vector<string> * recipeList = new vector<string>;
    
    recipeList->push_back("Блин со сгущенкой");
    paymentDevice->SetPrice(20);
    recipeList->push_back("Блин со сметаной");
    paymentDevice->SetPrice(25);
    recipeList->push_back("Блин с вишневой начинкой");
    paymentDevice->SetPrice(30);
    recipeList->push_back("Блин с малиновой начинкой");
    paymentDevice->SetPrice(35);

    

    //Создание кухонных приборов для системы
    Plate * plate = new Plate();
    Fan * fan = new Fan();
    Packer* packer = new Packer();
    Despenser* despenser = new Despenser();
    Scapula* scapula = new Scapula();
    Scales* scales = new Scales();

    //Установка созданных компонетов в систему
    System PancakeSystem;
    PancakeSystem.SetBot(helperBot);
    PancakeSystem.SetPayment(paymentDevice);
    PancakeSystem.SetDropoff(dropoffDevice);
    PancakeSystem.SetRecipe(recipeList);

    //Работа системы с выбором активного кухонного прибора
    int userValue;
    int userMoney;

    cout << "Список доступных блинов" << endl;
    PancakeSystem.ShowRecipeList();
    cout << "Цены соответственно" << endl;
    PancakeSystem.ShowPriceList();

    cout << "Ваш выбор: ";
    cin >> userValue;

    do {
        cout << "Введите сумму для оплаты: ";
        cin >> userMoney;
    }while(PancakeSystem.MakeAPayment(userMoney, userValue - 1) != 0);
    
    cout << "\nНачинаю готовить " +  recipeList->at(userValue - 1) << endl;
    PancakeSystem.SetActiveDevice(despenser);
    PancakeSystem.Enable();
    PancakeSystem.Disable();
    PancakeSystem.SetActiveDevice(fan);
    PancakeSystem.Enable();
    PancakeSystem.Disable();
    PancakeSystem.SetActiveDevice(plate);
    PancakeSystem.Enable();
    PancakeSystem.Disable();
    PancakeSystem.SetActiveDevice(scapula);
    PancakeSystem.Enable();
    PancakeSystem.Disable();
    PancakeSystem.SetActiveDevice(despenser);
    PancakeSystem.Enable();
    PancakeSystem.Disable();
    PancakeSystem.SetActiveDevice(plate);
    PancakeSystem.Enable();
    PancakeSystem.Disable();
    PancakeSystem.SetActiveDevice(packer);
    PancakeSystem.Enable();
    PancakeSystem.Disable();
    PancakeSystem.Give();
    
}
