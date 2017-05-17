#include "field.h"
#include <iostream>

using namespace std;

Field::Field()
{
   for(int i = 0; i<10;i++)
   {
       for(int j = 0; j < 10; j++)
       {
           cout << " ~ "<< matrix[i][j];
       }
   }

   this -> numberOfShips = 0;
}
Field::Field(const char matrix, int numberOfShips)
{
    this -> numberOfShips = numberOfShips;
}

int Field::getNumberOfShips() const
{
    return numberOfShips;
}
void Field::setNumberOfShips(int numberOfShips)
{
    this -> numberOfShips = numberOfShips;
}
