#pragma once
#include <iostream>
#include "Ship.h"
#include "position.h"

using namespace std;

class Battleship:public Ship
{
    public:
        Battleship();
        Battleship(int newSize, int newHp, ShipPosition newPosition);
        Battleship(const Battleship& other);

        //void virtual specialAbility;
    private:

};

