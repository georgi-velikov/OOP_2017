#pragma once
#include <iostream>
#include "Ship.h"
#include "position.h"
using namespace std;

class Submarine:public Ship
{
    public:
        Submarine();
        Submarine(int newSize, int newHp, ShipPosition newPosition);
        Submarine(const Battleship& other);

        //void virtual specialAbility;

    private:

};
