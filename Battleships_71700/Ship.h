#ifndef SHIP_H
#define SHIP_H
#include <iostream>
#include "position.h"
using namespace std;

class Ship
{
    public:
        Ship();
        Ship(int newSize, int newHp, ShipPosition newPosition)
        ~Ship();
        Ship(const Ship& other);
        Ship& operator=(const Ship& other);

        int getHp() const;
        int getSize()const;
        const ShipPosition& getPosition() const;

        void setHp(int hp);
        void setSize(int Size);
        void setPosition(const ShipPosition& position);

       // void specialAbility
    protected:

    private:
        int hp;
        int Size;
        ShipPosition position;

};

#endif // SHIP_H
