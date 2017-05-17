#pragma once
#include <iostream>
#include "Ship.h"
#include "position.h"
using namespace std;

class Cruiser:public Ship
{
    public:
        Cruiser();
        Cruiser(int newSize, int newHp, ShipPosition newPosition);
        Cruiser(const Battleship& other);

        //void virtual specialAbility;

    private:

};
