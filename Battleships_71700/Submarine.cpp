#include "Submarine.h"

Submarine::Submarine()
{
    this ->  position.x1 = 1;
    this ->  position.x2 = 1;
    this ->  position.y1 = 1;
    this ->  position.y2 = 3;
    this -> hp = 3;
    this -> size = 3;
}

Submarine::Submarine(int newSize, int newHp, ShipPosition newPosition)
{
    setSize(newSize);
    setHp(newHp);
    setPosition(newPosition);
}
/*
int Submarine::getHp() const
{
    return hp;
}
int Submarine::getSize() const
{
    return size;
}
void Submarine::setHp(int hp)
{
    this->hp = hp;
}
void Submarine::setSize(int size)
{
    this->size = size;
}

void Submarine::setPosition(const ShipPosition& position)
{
    this->position=position;
}
*/



