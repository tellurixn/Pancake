#include "MineralWater.h"

MineralWater::MineralWater()
{
    cout << "����������� ����" << endl;
}

Drinks* MineralWater::Clone()
{
    return new MineralWater(*this);
}
