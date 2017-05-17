#include "Battleship.h"
// ѕри положение, че съм ги наследил от бащини€ клас по-гол€мата част ще се махнат, но за момента не искам да ги три€, заради това ги закоментирам.

Battleship::Battleship()
{
    this -> position.x1 = 2;
    this -> position.x2 = 2;
    this -> position.y1 = 1;
    this -> position.y2 = 4;
    this -> hp = 4;
    this -> size = 4;
}

Battleship::Battleship(int newSize, int newHp, ShipPosition newPosition)
{
    setSize(newSize);
    setHp(newHp);
    setPosition(newPosition);
}
/*
int Battleship::getHp() const
{
    return hp;
}
int Battleship::getSize() const
{
    return size;
}
void Battleship::setHp(int hp)
{
    this->hp = hp;
}
void Battleship::setSize(int size)
{
    this->size = size;
}

void Battleship::setPosition(const ShipPosition& position)
{
    this->position = position;
}
*/
