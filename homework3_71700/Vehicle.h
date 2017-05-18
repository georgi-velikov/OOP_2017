#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include "String.h"
#include "Info.h"

using namespace std;


enum class Engine{None,Diesel,Benzin,Hybrid,Gas};
enum class Euro{None,Euro1,Euro2,Euro3,Euro4,Euro5,Euro6};

class Vehicle : public Info
{
    public:
        Vehicle();
        Vehicle(String _Name,int* EGN,String _Nomer,String _RegDate,String _Color, Engine TypeEngine,
                int HorsePower,double Volume,int Cylinders,Euro _EuroStandart);
        Vehicle(const Vehicle& other);
        Vehicle& operator=(const Vehicle& other);

        const Engine GetTypeEngine() ;
        const int GetHorsePower() ;
        const double GetVolume() ;
        const int GetCylinders() ;
        const Euro GetEuroStandart() ;

        void SetTypeEngine(Engine val);
        void SetHorsePower(int val);
        void SetVolume(double val);
        void SetCylinders(int val);
        void SetEuroStandart(Euro val);

        double CalculateTaxRegion(double coefByRegion);

    private:
        Engine TypeEngine;
        int HorsePower;
        double Volume;
        int Cylinders;
        Euro EuroStandart;

};
#endif // VEHICLE_H
