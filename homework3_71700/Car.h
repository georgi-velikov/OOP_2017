#ifndef CAR_H
#define CAR_H
#include <iostream>
#include "String.h"
#include "Vehicle.h"

enum class CarType{None,Hatchback,Sedan,Combi,Cabriolet,LiftBack};

class Car:public Vehicle{
public:
    Car();
    Car(String _Name,int* EGN,String _Nomer,String _RegDate,String _Color, Engine _TypeEngine ,
        int _HorsePower , double _Volume ,int _Cylinders ,Euro _newEuroStandart,CarType _eCarType);
    Car(const Car& other);
    Car& operator=(const Car& rhs);

    void setCarType(CarType _eCarType);

private:
      CarType eCarType;

};
#endif // CAR_H
