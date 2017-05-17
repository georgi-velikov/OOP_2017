#pragma once
#include <iostream>
#include "Ship.h"
#include "position.h"
using namespace std;

class Destroyer:public Ship
{
    public:
        Destroyer();
        Destroyer(int newSize, int newHp, ShipPosition newPosition);
        Destroyer(const Battleship& other);

        //void virtual specialAbility;
    private:

};

