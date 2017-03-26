#include <iostream>
#include "String.h"
using namespace std;

int main()
{
    String s1("dasdas",6);
    s1.setSize(8);
    cout << s1.getStr() << endl;
    cout << s1.getSize();
    return 0;
}
