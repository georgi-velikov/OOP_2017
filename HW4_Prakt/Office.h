#include "Delivery.h"
#include "Vector.h"

enum Location
{
    StaraZagora,
    Sofia,
    Burgas,
    Pleven,
    Plovdiv,
    Ruse,
    Shumen,
};

class Office
{
private:
    const int ID;
    Location loc;
    Vector<Location> canDeliver;
    Vector<Person> registeredUsers;
    Vector<Delivery> deliveries;

public:
    static int sentAndRecieved ;
    Office(Location _loc , Vector<Location> _canDeliver , Vector<Person> _registeredUsers , Vector<Delivery> _deliveries);

    const int getID() const;
    void getLocation() const;
    const int getSentRecieved() const;
    int getRegisteredCount();
    void getCanDeliver();

    void addLocation(Location& other);
    void addUser(Person& other);
    void addDelivery(const Delivery& other);
    void findByUser(const Person& other);
    void sendDelivery(Delivery& other, Office& destination);
    void trackDelivery(int _ID);

};
