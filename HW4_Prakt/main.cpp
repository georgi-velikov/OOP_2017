#include <iostream>
#include "Delivery.h"
#include "Package.h"
#include "Cargo.h"
#include "Office.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;


    int Office::sentAndRecieved = 0;
int main()
{
    srand(time(0));

    Person A;
    A.name = "Nikola";
    A.adress = "1";
    A.phoneNumber = "9";
    Vector<Delivery> C;
    Delivery B("Gosho","Hristo Botev","07951327","Nikola","\0","\0",TypeDelivery::Fast);
    Vector<Location> canDeliverTo;
    canDeliverTo.push_back(Location::Ruse);
    canDeliverTo.push_back(Location::Burgas);
    canDeliverTo.push_back(Location::Sofia);
    Vector<Person> registered;
    registered.push_back(A);
    C.push_back(B);
    Office Test(Location::Ruse,canDeliverTo,registered,C);

    Person d;
    d.name = "Gosho";
    d.adress = "Hristo Botev";
    d.phoneNumber = "07951327";
    Test.getLocation();
    Test.getCanDeliver();
    Test.addUser(d);
    cout<<Test.getRegisteredCount()<<endl;
    cout<<Test.getID()<<endl;
    Test.findByUser(A);
    cout<<Test.getSentRecieved()<<endl;
    Test.sendDelivery(B,Test);
    cout<<Test.getSentRecieved()<<endl;

    return 0;
}
