#pragma once
#include <iostream>
#include "Ship.h"
#include "position.h"
using namespace std;

class Carrier:public Ship
{
    public:
        Carrier();
        Carrier(int newSize, int newHp, ShipPosition newPosition);
        Carrier(const Battleship& other);

        //void virtual specialAbility;
    private:

};
