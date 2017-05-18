#ifndef TRUCK_H
#define TRUCK_H
#include <iostream>
#include "String.h"
#include "Vehicle.h"

enum class TruckType{None,Trailer,Normal,Specia};

class Truck : public Vehicle{
    public:
    Truck();
    Truck(String _Name,int* EGN,String _Nomer,String _RegDate,String _Color, Engine _TypeEngine ,
          int _HorsePower , double _Volume ,int _Cylinders ,Euro _newEuroStandart,TruckType _eTruckType);
    Truck(const Truck& other);
    Truck& operator=(const Truck& rhs);

    void setTruckType(TruckType _eTruckType);

    private:
    TruckType eTruckType;

};

#endif // TRUCK_H
