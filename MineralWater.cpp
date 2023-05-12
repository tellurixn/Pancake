#include "MineralWater.h"

MineralWater::MineralWater()
{
    cout << "Минеральная вода" << endl;
}

Drinks* MineralWater::Clone()
{
    return new MineralWater(*this);
}
