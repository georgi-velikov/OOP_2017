#include "Mototcycle.h"

Motorcycle::Motorcycle()
:Vehicle()
{
    setMotorcycleType(MotorcycleType::None);
}

Motorcycle::Motorcycle(String _Name,int* EGN,String _Nomer,String _RegDate,String _Color,
    Engine _TypeEngine , int _HorsePower , double _Volume ,int _Cylinders ,Euro _EuroStandart,MotorcycleType _eMotorcycleType)

{
    setMotorcycleType(_eMotorcycleType);
}

Motorcycle::Motorcycle(const Motorcycle& other)
:Vehicle(other)
{
    setMotorcycleType(other.eMotorcycleType);
}

Motorcycle& Motorcycle::operator=(const Motorcycle& rhs)
{
    if(this==&rhs)
        return *this;

    Vehicle::operator=(rhs);
    setMotorcycleType(rhs.eMotorcycleType);
    return *this;

}

void Motorcycle::setMotorcycleType(MotorcycleType _eMotorcycleType)
{
    eMotorcycleType = _eMotorcycleType;
}
