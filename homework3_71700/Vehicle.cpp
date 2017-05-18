#include "Vehicle.h"

Vehicle::Vehicle()
:Info()
{
    SetTypeEngine(Engine::None);
    SetHorsePower(0);
    SetVolume(0);
    SetCylinders(0);
    SetEuroStandart(Euro::None);
}

Vehicle::Vehicle(String _Name,int* _EGN,String _Nomer,String _RegDate,String _Color,Engine _TypeEngine,
                 int _HorsePower,double _Volume,int _Cylinders,Euro _EuroStandart)
:Info( _Name, _EGN, _Nomer, _RegDate, _Color)
{

    SetTypeEngine(TypeEngine);
    SetHorsePower(HorsePower);
    SetVolume(Volume);
    SetCylinders(Cylinders);
    SetEuroStandart(_EuroStandart);

}
Vehicle::Vehicle(const Vehicle& other)
:Info(other)
{

    SetTypeEngine(other.TypeEngine);
    SetHorsePower(other.HorsePower);
    SetVolume(other.Volume);
    SetCylinders(other.Cylinders);
    SetEuroStandart(other.EuroStandart);

}
Vehicle& Vehicle::operator=(const Vehicle& rhs)
{
    if (this == &rhs) return *this;
        Info::operator=(rhs);

    SetTypeEngine(rhs.TypeEngine);
    SetHorsePower(rhs.HorsePower);
    SetVolume(rhs.Volume);
    SetCylinders(rhs.Cylinders);
    SetEuroStandart(rhs.EuroStandart);


    return *this;
}
const Engine Vehicle::GetTypeEngine()
{
    return TypeEngine;
}
const int Vehicle::GetHorsePower()
{
    return HorsePower;
}
const double Vehicle::GetVolume()
{
    return Volume;
}
const int Vehicle::GetCylinders()
{
    return Cylinders;
}
const Euro Vehicle::GetEuroStandart()
{
   return EuroStandart;
}
void Vehicle::SetTypeEngine(Engine newTypeEngine)
{
    TypeEngine = newTypeEngine;
}
void Vehicle::SetHorsePower(int newHorsePower)
{
    HorsePower = newHorsePower;
}
void Vehicle::SetVolume(double newVolume)
{
    Volume = newVolume;
}
void Vehicle::SetCylinders(int newCylinders)
{
    Cylinders = newCylinders;
}
void Vehicle::SetEuroStandart(Euro newEuroStandart)
{
    EuroStandart = newEuroStandart;
}

double Vehicle::CalculateTaxRegion(double coefByRegion)
{
	int tax = 10;
	if (HorsePower > 100)
	{
		tax = 100;
	}

	return (tax + HorsePower) * coefByRegion;
}
