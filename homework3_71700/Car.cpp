#include "Car.h"

Car::Car()
:Vehicle()
{
    setCarType(CarType::None);
}


Car::Car(String _Name,int* EGN,String _Nomer,String _RegDate,String _Color,
    Engine _TypeEngine , int _HorsePower , double _Volume ,int _Cylinders ,Euro _EuroStandart,CarType _eCarType)

{
    setCarType(_eCarType);
}

Car::Car(const Car& other)
:Vehicle(other)
{
    setCarType(other.eCarType);
}

Car& Car::operator=(const Car& rhs)
{
    if(this==&rhs)
        return *this;

    Vehicle::operator=(rhs);
    setCarType(rhs.eCarType);
    return *this;

}

void Car::setCarType(CarType _eCarType)
{
    eCarType = _eCarType;
}
