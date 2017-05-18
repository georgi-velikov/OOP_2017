#include "Truck.h"

Truck::Truck()
:Vehicle()
{
    setTruckType(TruckType::None);
}

Truck::Truck(String _Name,int* EGN,String _Nomer,String _RegDate,String _Color,
        Engine _TypeEngine , int _HorsePower , double _Volume ,int _Cylinders ,Euro _EuroStandart,TruckType _eTruckType)

{
    setTruckType(_eTruckType);
}

Truck::Truck(const Truck& other)
:Vehicle(other)
{
    setTruckType(other.eTruckType);
}

Truck& Truck::operator=(const Truck& rhs)
{
    if(this==&rhs)
        return *this;

    Vehicle::operator=(rhs);
    setTruckType(rhs.eTruckType);
    return *this;

}

void Truck::setTruckType(TruckType _eTruckType)
{
    eTruckType = _eTruckType;
}
