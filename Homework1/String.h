#pragma once
#include <cstring>
#include <iostream>
using namespace std;
class String
{
private:
    char* Str;
    int Size;

public:
    String();
    String(const char* Str, const int Size);
    ~String();

    char* getStr();
    int getSize();

    void setStr(const char* Str);
    void setSize(int Size);

    void destroy();
};
