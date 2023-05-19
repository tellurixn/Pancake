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
#include "Caretaker.h"
#include "OrderMaker.h"
#include "SystemPower.h"



int main()
{
    setlocale(LC_ALL, "Russian");

    //�������� �������� ����������� �������
    Bot * helperBot = new ProxyBot("Helper");

    Payment * paymentDevice = new Payment();
    Dropoff * dropoffDevice = new Dropoff();
    vector<string> * recipeList = new vector<string>;
    
    recipeList->push_back("���� �� ���������");
    paymentDevice->SetPrice(20);
    recipeList->push_back("���� �� ��������");
    paymentDevice->SetPrice(25);
    recipeList->push_back("���� � �������� ��������");
    paymentDevice->SetPrice(30);
    recipeList->push_back("���� � ��������� ��������");
    paymentDevice->SetPrice(35);

    

    //�������� �������� �������� ��� �������
    Plate  * plate = new Plate;
    Fan * fan = new Fan;
    Packer* packer = new Packer;
    Scapula* scapula = new Scapula;
    Scales* scales = new Scales;
    Despenser despenser;

    /*
    //�������� ������������
    CompositeDevice devices;
    //�������� �������
    LeafDevice* leafPlate = new LeafDevice(plate->name, "big");
    LeafDevice* leafFan = new LeafDevice(fan->name, "middle");
    LeafDevice* leafPacker = new LeafDevice(packer->name, "small");
    LeafDevice* leafScapula = new LeafDevice(scapula->name, "small");
    LeafDevice* leafScales = new LeafDevice(scales->name, "small");
    LeafDevice* leafDespenser = new LeafDevice(despenser.name, "middle");

    //���������� ������������ ���������
    devices.Add(leafPlate);
    devices.Add(leafFan);
    devices.Add(leafPacker);
    devices.Add(leafScapula);
    devices.Add(leafScales);
    devices.Add(leafDespenser);

    cout << "���������� ������������: " << endl;
    devices.Display();
    cout << "���������� ����������� �� �������(�� �������� � ������)\n" << endl;
    devices.SortBySize();
    cout << "����������� ���������\n" << endl;
    */
    
    //���������� ����������� ��� ��������
    DespenserWithDough despWithDough(&despenser); //������� � ������
    DespenserWithSweetStuffing despWithSweetStuffing(&despenser);//������� �� ������� ��������

    //���������� ������� ������ �������� ��������
    Submitter* submitter = new Submitter;
    Adapter* adapter = new Adapter(submitter);

    //��������� ��������� ���������� � �������
    System PancakeSystem;
    PancakeSystem.SetBot(helperBot);
    PancakeSystem.SetPayment(paymentDevice);
    PancakeSystem.SetDropoff(dropoffDevice);
    PancakeSystem.SetRecipe(recipeList);
    PancakeSystem.SetSubmitter(adapter);



    //������ ������� � ������� ��������� ��������� �������
    int userValue;//����� ����� � ������, ������� ������� ������
    int userMoney;//����� � ������ �������

    //������� � ��������
    cout << "������ ��������� ������" << endl;
    PancakeSystem.ShowRecipeList();
    cout << "���� ��������������" << endl;
    PancakeSystem.ShowPriceList();

    do {
        cout << "��� �����: ";
        cin >> userValue;
    } while (userValue > recipeList->size() || userValue <= 0);

    do {
        cout << "������� ����� ��� ������: ";
        cin >> userMoney;
    }while(PancakeSystem.MakeAPayment(userMoney, userValue - 1) != 0);

    //������ ��������
    cout << "\n������� �������� " +  recipeList->at(userValue - 1) << endl;
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

    //������ ������ � ����
    
    Printer* colorPrinter = new ColorPrinter();
    Printout* flyer = colorPrinter->StartPrinting("�����");
    
    Printer* bwprinter = new BWPrinter();
    Printout* check = bwprinter->StartPrinting("���");
    flyer->Display();
    check->Display();

    //����������� �������
    CappuccinoWithCakeMaker *cappWithCake = new CappuccinoWithCakeMaker();
    LatteWithDonutMaker* latteWithDonut = new LatteWithDonutMaker();

    Breakfast* firstBreakfast = cappWithCake->MakeBreakfast();
    Breakfast* secondBreakfast = latteWithDonut->MakeBreakfast();

    cout << "\n�������� ������ ������� ��������!" << endl;
    cout << "������ �������" << endl;
    firstBreakfast->show();
    cout << "\n������ �������" << endl;
    secondBreakfast->show();
    

    //��������
    cout << "\n\n�������" << endl;
    Tea* teaPrototype = new Tea(15, "��� � ��������");
    Drinks *greenTea = teaPrototype->Clone();

    teaPrototype->ShowName();
    teaPrototype->ShowCost();

    greenTea->ShowName();
    greenTea->ShowCost();

    Drinks *newCola = new Cola(35, "���� � �������");
    Drinks* CocaCola = newCola->Clone();

    newCola->ShowName();
    newCola->ShowCost();

    CocaCola->ShowName();
    CocaCola->ShowCost();

    //��������
    cout << "\n������� ������������ �������������" << endl;
    cout << "���������� ������������" << endl;
    SingleUser* firstUser = SingleUser::Instance("����");
    firstUser->Display();

    cout << "���������� ������ ������������" << endl;
    SingleUser* secondUser = SingleUser::Instance("�������");
    secondUser->Display();

    //Memento
    cout << "\nMemento" << endl;
    Order* order = new Order("Black tea");
    Caretaker* caretaker = new Caretaker(order);
    order->ShowCurrentOrder();
    caretaker->Backup();
    order->MakeOrder();
    order->ShowCurrentOrder();
    caretaker->Backup();
    order->MakeOrder();
    order->ShowCurrentOrder();
    caretaker->ShowHistory();
    caretaker->Undo();
    order->ShowCurrentOrder();
    

    //State
    cout << "\nState" << endl;
    OrderMaker* orderMaker = new OrderMaker(order);
    orderMaker->MakeOrder();
    orderMaker->DeleteMyOrder();

    orderMaker->MakeOrder();
    orderMaker->DeleteMyOrder();

    //Observer
    cout << "\nObserver" << endl;
    SystemPower sysPower;
    PowerObserver powerObs(&sysPower);
    sysPower.SetValue(true);
    sysPower.SetValue(false);



}
