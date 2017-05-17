#pragma once
#include <iostream>

using namespace std;

class Field
{
private:
    char matrix[10][10];
	int numberOfShips;

public:
    Field();
    Field(const char matrix, int numberOfShips);

    char getMatrix();
    int getNumberOfShips() const;

    void setMatrix(bool matrix);
    void setNumberOfShips(int numberOfShips);
};
