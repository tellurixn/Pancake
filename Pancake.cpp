﻿#include <iostream>
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
#include "DespenserWithDough.h"
#include "DespenserWithSweetStuffing.h"
#include "Submitter.h"
#include "Adapter.h"
#include "CompositeDevice.h"
#include "LeafDevice.h"
#include "Printout.h"
#include "Printer.h"
#include "Check.h"
#include "Flyer.h"
#include "ColorPrinter.h"
#include "BWPrinter.h"
#include "LatteWithDonutMaker.h"
#include "CappuccinoWithCakeMaker.h"
#include "Breakfast.h"
#include "Tea.h"
#include "Cola.h"
#include "Juice.h"
#include "MineralWater.h"
#include "SingleUser.h"

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
    Plate  * plate = new Plate;
    Fan * fan = new Fan;
    Packer* packer = new Packer;
    Scapula* scapula = new Scapula;
    Scales* scales = new Scales;
    Despenser despenser;

    /*
    //Создание компоновщика
    CompositeDevice devices;
    //Создание листьев
    LeafDevice* leafPlate = new LeafDevice(plate->name, "big");
    LeafDevice* leafFan = new LeafDevice(fan->name, "middle");
    LeafDevice* leafPacker = new LeafDevice(packer->name, "small");
    LeafDevice* leafScapula = new LeafDevice(scapula->name, "small");
    LeafDevice* leafScales = new LeafDevice(scales->name, "small");
    LeafDevice* leafDespenser = new LeafDevice(despenser.name, "middle");

    //Наполнение компоновщика объектами
    devices.Add(leafPlate);
    devices.Add(leafFan);
    devices.Add(leafPacker);
    devices.Add(leafScapula);
    devices.Add(leafScales);
    devices.Add(leafDespenser);

    cout << "Содержимое компоновщика: " << endl;
    devices.Display();
    cout << "Сортировка содержимого по размеру(от большого к малому)\n" << endl;
    devices.SortBySize();
    cout << "Компоновщик отработал\n" << endl;
    */
    
    //Добавление декораторов для дозатора
    DespenserWithDough despWithDough(&despenser); //Дозатор с тестом
    DespenserWithSweetStuffing despWithSweetStuffing(&despenser);//Дозатор со сладкой начинкой

    //Добавление системы выдачи столовых приборов
    Submitter* submitter = new Submitter;
    Adapter* adapter = new Adapter(submitter);

    //Установка созданных компонетов в систему
    System PancakeSystem;
    PancakeSystem.SetBot(helperBot);
    PancakeSystem.SetPayment(paymentDevice);
    PancakeSystem.SetDropoff(dropoffDevice);
    PancakeSystem.SetRecipe(recipeList);
    PancakeSystem.SetSubmitter(adapter);



    //Работа системы с выбором активного кухонного прибора
    int userValue;//Номер блина в списке, который выберет клиент
    int userMoney;//Сумма к оплате клиента

    //Общение с клиентом
    cout << "Список доступных блинов" << endl;
    PancakeSystem.ShowRecipeList();
    cout << "Цены соответственно" << endl;
    PancakeSystem.ShowPriceList();

    do {
        cout << "Ваш выбор: ";
        cin >> userValue;
    } while (userValue > recipeList->size() || userValue <= 0);

    do {
        cout << "Введите сумму для оплаты: ";
        cin >> userMoney;
    }while(PancakeSystem.MakeAPayment(userMoney, userValue - 1) != 0);

    //Работа автомата
    cout << "\nНачинаю готовить " +  recipeList->at(userValue - 1) << endl;
    PancakeSystem.SetActiveDevice(&despWithDough);
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
    PancakeSystem.SetActiveDevice(&despWithSweetStuffing);
    PancakeSystem.Enable();
    PancakeSystem.Disable();
    PancakeSystem.SetActiveDevice(plate);
    PancakeSystem.Enable();
    PancakeSystem.Disable();
    PancakeSystem.SetActiveDevice(packer);
    PancakeSystem.Enable();
    PancakeSystem.Disable();
    PancakeSystem.Give();
    PancakeSystem.ServeCutlery();

    //Печать флаера и чека
    
    Printer* colorPrinter = new ColorPrinter();
    Printout* flyer = colorPrinter->StartPrinting("Флаер");
    
    Printer* bwprinter = new BWPrinter();
    Printout* check = bwprinter->StartPrinting("Чек");
    flyer->Display();
    check->Display();

    //Абстрактная фабрика
    CappuccinoWithCakeMaker *cappWithCake = new CappuccinoWithCakeMaker();
    LatteWithDonutMaker* latteWithDonut = new LatteWithDonutMaker();

    Breakfast* firstBreakfast = cappWithCake->MakeBreakfast();
    Breakfast* secondBreakfast = latteWithDonut->MakeBreakfast();

    cout << "\nБлиномат теперь готовит завтраки!" << endl;
    cout << "Первый завтрак" << endl;
    firstBreakfast->show();
    cout << "\nВторой завтрак" << endl;
    secondBreakfast->show();
    

    //Прототип
    cout << "\n\nНапитки" << endl;
    Tea* teaPrototype = new Tea(15, "Чай с лимомном");
    Drinks *greenTea = teaPrototype->Clone();

    teaPrototype->ShowName();
    teaPrototype->ShowCost();

    greenTea->ShowName();
    greenTea->ShowCost();

    Drinks *newCola = new Cola(35, "Кола с ванилью");
    Drinks* CocaCola = newCola->Clone();

    newCola->ShowName();
    newCola->ShowCost();

    CocaCola->ShowName();
    CocaCola->ShowCost();

    //Одиночка
    cout << "\nСистема регистрирует пользователей" << endl;
    cout << "Добавление пользователя" << endl;
    SingleUser* firstUser = SingleUser::Instance("Иван");
    firstUser->Display();

    cout << "Добавление нового пользователя" << endl;
    SingleUser* secondUser = SingleUser::Instance("Дмитрий");
    secondUser->Display();
}
