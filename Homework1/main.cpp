#include <iostream>
#include "String.h"
#include "ServiceJob.h"
#include "ServiceEntry.h"
using namespace std;

int main()
{
    ServiceJob s1(20,Engine);
    cout << s1.GetServiceJobPrice(s1);
    return 0;
}
