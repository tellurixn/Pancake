#include "DespenserWithDough.h"

void DespenserWithDough::actionEnable()
{
	despenser->actionEnable();
	cout << "������� ��������: �����" << endl;
}

void DespenserWithDough::actionDisable()
{
	despenser->actionDisable();
	cout << "����� � �������� �����������" << endl;
}
