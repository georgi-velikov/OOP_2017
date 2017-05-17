#include "Ship.h"

Ship::Ship()
{
    this -> position.x1 = 0;
    this -> position.x2 = 0;
    this -> position.y1 = 0;
    this -> position.y2 = 0;
    this -> hp = 0;
    this -> Size = 0;
}
Ship::Ship(int newSize, int newHp, ShipPosition newPosition)
{
    setSize(newSize);
    setHp(newHp);
    setPosition(newPosition);
}
Ship::~Ship()
{

}

Ship::Ship(const Ship& other)
{
    setSize(other.Size);
    setHp(other.hp);
    setPosition(other.position);
}

Ship& Ship::operator=(const Ship& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
int Ship::getHp() const
{
    return hp;
}
int Ship::getSize() const
{
    return Size;
}
void Ship::setHp(int newHp)
{
    this->hp = hp;
}
void Ship::setSize(int newSize)
{
    Size = newSize;
}

void Ship::setPosition(const ShipPosition& newPosition)
{
    position = newPosition;
}
