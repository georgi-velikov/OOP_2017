#include "Destroyer.h"
#include "Submarine.h"

Destroyer::Destroyer()
{
    this ->  position.x1 = 7;
    this ->  position.x2 = 7;
    this ->  position.y1 = 3;
    this ->  position.y2 = 4;
    this -> hp = 2;
    this -> size = 2;
}

Destroyer::Destroyer(int newSize, int newHp, ShipPosition newPosition)
{
    setSize(newSize);
    setHp(newHp);
    setPosition(newPosition);
}
/*
int Destroyer::getHp() const
{
    return hp;
}
int Destroyer::getSize() const
{
    return size;
}
void Destroyer::setHp(int hp)
{
    this->hp = hp;
}
void Destroyer::setSize(int size)
{
    this->size = size;
}

void Destroyer::setPosition(const ShipPosition& position)
{
    this->position=position;
}
*/
