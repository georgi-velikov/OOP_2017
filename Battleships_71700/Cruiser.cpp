#include "Cruiser.h"

Cruiser::Cruiser()
{
    this ->  position.x1 = 4;
    this ->  position.x2 = 4;
    this ->  position.y1 = 1;
    this ->  position.y2 = 3;
    this -> hp = 3;
    this -> size = 3;
}

Cruiser::Cruiser(int newSize, int newHp, ShipPosition newPosition)
{
    setSize(newSize);
    setHp(newHp);
    setPosition(newPosition);
}
/*
int Cruiser::getHp() const
{
    return hp;
}
int Cruiser::getSize() const
{
    return size;
}
void Cruiser::setHp(int hp)
{
    this->hp = hp;
}
void Cruiser::setSize(int size)
{
    this->size = size;
}

void Cruiser::setPosition(const ShipPosition& position)
{
    this->position=position;
}
*/
