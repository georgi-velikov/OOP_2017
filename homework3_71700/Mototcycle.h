#ifndef MOTOTCYCLE_H
#define MOTOTCYCLE_H
#include <iostream>
#include "String.h"
#include "Vehicle.h"

enum class MotorcycleType{None,Sport,Tourist,Cruiser,Chopper,Cross};

class Motorcycle : public Vehicle{
    public:
    Motorcycle();
    Motorcycle(String _Name,int* EGN,String _Nomer,String _RegDate,String _Color, Engine _TypeEngine ,
               int _HorsePower , double _Volume ,int _Cylinders ,Euro _newEuroStandart,MotorcycleType _eMotorcycleType);
    Motorcycle(const Motorcycle& other);
    Motorcycle& operator=(const Motorcycle& rhs);

    void setMotorcycleType(MotorcycleType _eMotorcycleType);

    private:
    MotorcycleType eMotorcycleType;

};
#endif // MOTOTCYCLE_H
