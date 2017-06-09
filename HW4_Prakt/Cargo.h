#pragma once
#include "Delivery.h"

enum class cargoType
{
    Palet,
    Euro,
    Industrial,
};

enum class Warnings
{
    Fragile,
    Toxic,
    FireHazard,
    Refrigerated,
    None,
};

class Cargo : public Delivery
{
private:
    cargoType eCargoType;
    Warnings special;

public:
    Cargo(char* newSender,char* newSenderAdress,
            char* newSenderPhone,char* newReceiver,
            char* newReceiverAdress,char* newReceiverPhone,TypeDelivery _eType,
            cargoType _eCargoType,Warnings _special);

    //Getters and setters
    cargoType getCargoTypeEnum();
    Warnings getWarningsEnum();
    void getCargoType();
    void getWarnings();

    void setCargoType(cargoType _type);
    void setWarnings(Warnings _special);


    void printInfo()
        {
            Delivery::printInfo();
            cout<<"Type of delivery : Cargo"<<endl;
            cout<<"Cargo type : ";
            switch (eCargoType)
            {
                case cargoType::Palet : cout<<"Palet"<<endl;
                break;
                case cargoType::Industrial : cout<<"Industrial"<<endl;
                break;
                case cargoType::Euro : cout<<"Euro"<<endl;
                break;
            }
            cout<<"Special warnings : ";
            switch (special)
            {
                case Warnings::Fragile : cout<<"Fragile"<<endl;
                break;
                case Warnings::Toxic : cout<<"Toxic"<<endl;
                break;
                case Warnings::FireHazard : cout<<"Fire hazardous"<<endl;
                break;
                case Warnings::Refrigerated : cout<<"Refrigerated"<<endl;
                break;
                case Warnings::None : cout<<"None"<<endl;
                break;
            }
        }

    double calculatePrice()
        {
            double price=0;
            switch (eCargoType)
            {
                case cargoType::Palet : price = 50;
                break;
                case cargoType::Industrial : price = 200;
                break;
                case cargoType::Euro : price = 75;
                break;
            };
            switch (special)
            {
                case Warnings::None : ;
                break;
                default : price *=1.5;
            };
            switch (getDeliveryTypeEnum())
            {
                case TypeDelivery::Default : return price * 1;
                break;
                case TypeDelivery::Fast : return price * 1.3;
                break;
                case TypeDelivery::Express : return price * 1.5;
                break;
            };
            return 0;
        }
};
