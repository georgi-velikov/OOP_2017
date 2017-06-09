#include "Office.h"
#include <stdlib.h>     /* srand, rand */


Office::Office(Location _loc , Vector<Location> _canDeliver , Vector<Person> _registeredUsers , Vector<Delivery> _deliveries) : ID(rand()%10+100)
{
    loc = _loc;
    canDeliver = _canDeliver;
    registeredUsers = _registeredUsers;
    deliveries = _deliveries;

}

const int Office::getID() const
{
    return ID;
}
void Office::getLocation() const
{
    switch (loc)
        {
            case 0 : cout<< "Stara Zagora"<<endl;
            break;
            case 1 : cout<< "Sofia"<<endl;
            break;
            case 2 : cout<< "Burgas"<<endl;
            break;
            case 3 : cout<< "Pleven"<<endl;
            break;
            case 4 : cout<< "Plovdiv"<<endl;
            break;
            case 5 : cout<< "Ruse"<<endl;
            break;
            case 6 : cout<< "Shumen"<<endl;
            break;

        }
}
const int Office::getSentRecieved() const
{
    return sentAndRecieved;
}
int Office::getRegisteredCount()
{
    return registeredUsers.GetSize();
}
void Office::getCanDeliver()
{
    cout<<"Can deliver to : ";
    for(int i = 0;i<canDeliver.GetSize();i++)
        {
            switch(canDeliver[i])
            {
            case 0 : cout<< "Stara Zagora  ";
            break;
            case 1 : cout<< "Sofia  ";
            break;
            case 2 : cout<< "Burgas  ";
            break;
            case 3 : cout<< "Pleven  ";
            break;
            case 4 : cout<< "Plovdiv  ";
            break;
            case 5 : cout<< "Ruse  ";
            break;
            case 6 : cout<< "Shumen  ";
            break;

            }
        }
}

    void Office::addLocation(Location& other)
    {
        canDeliver.push_back(other);
    }
    void Office::addUser(Person& other)
    {
        registeredUsers.push_back(other);
    }
    void Office::addDelivery(const Delivery& other)
    {
        deliveries.push_back(other);
    }
    void Office::findByUser(const Person& other)
    {
        cout<<"Delivery requests(IDs) made by : "<<other.name<<endl;
        bool match;
        for(int i = 0;i<deliveries.GetSize();i++)
        {
        match = false;
        if(strcmp(other.name.GetData(),deliveries[i].getSender().name.GetData())==0) match = true;
        if (match) cout<<"ID: "<<deliveries[i].getDeliveryID()<<"  ";

        }
    }
    void Office::sendDelivery(Delivery& other,Office& destination)
    {
        bool canDeliverB = false;
        for(int i =0;i<canDeliver.GetSize();i++)
        {
            if (destination.loc == canDeliver[i]) canDeliverB = true;
        }
        if (canDeliverB)
        {
            sentAndRecieved++;
        }
    }
    void Office::trackDelivery(int _ID)
    {
        for(int i = 0;i<deliveries.GetSize();i++)
        {
            if(_ID==deliveries[i].getDeliveryID())
            {
                deliveries[i].printInfo();
                return;
            }
        };
        cout<<"No such delivery request found."<<endl;

    }
