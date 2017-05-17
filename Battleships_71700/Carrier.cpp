#include "Carrier.h"

Carrier::Carrier()
{
    this ->  position.x1 = 3;
    this ->  position.x2 = 3;
    this ->  position.y1 = 1;
    this ->  position.y2 = 5;
    this -> hp = 5;
    this -> size = 5;
}

Carrier::Carrier(int newSize, int newHp, ShipPosition newPosition)
{
    setSize(newSize);
    setHp(newHp);
    setPosition(newPosition);
}
/*
int Carrier::getHp() const
{
    return hp;
}
int Carrier::getSize() const
{
    return size;
}
void Carrier::setHp(int hp)
{
    this->hp = hp;
}
void Carrier::setSize(int size)
{
    this->size = size;
}

void Carrier::setPosition(const ShipPosition& position)
{
    this->position=position;
}
*/
