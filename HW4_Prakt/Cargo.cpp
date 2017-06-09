#include "Cargo.h"


Cargo::Cargo(char* newSender,char* newSenderAdress,
            char* newSenderPhone,char* newReceiver,
            char* newReceiverAdress,char* newReceiverPhone,TypeDelivery _eType,
            cargoType _eCargoType,Warnings _special) : Delivery(newSender,newSenderAdress,
            newSenderPhone,newReceiver,
            newReceiverAdress, newReceiverPhone,_eType)
            {
                eCargoType = _eCargoType;
                special = _special;
            }


    cargoType Cargo::getCargoTypeEnum()
    {
        return eCargoType;
    }
    Warnings Cargo::getWarningsEnum()
    {
        return special;
    }
    void Cargo::getCargoType()
    {
        switch (eCargoType)
        {
            case cargoType::Euro : cout<<"Euro"<<endl;
            break;
            case cargoType::Palet : cout<<"Palet"<<endl;
            break;
            case cargoType::Industrial : cout<<"Industrial"<<endl;
            break;
        }
    }
    void Cargo::getWarnings()
    {
        switch (special)
        {
            case Warnings::Fragile : cout<<"Fragile"<<endl;
            break;
            case Warnings::FireHazard : cout<<"Fire hazardous"<<endl;
            break;
            case Warnings::Refrigerated : cout<<"Refridgerated"<<endl;
            break;
            case Warnings::Toxic : cout<<"Toxic"<<endl;
            break;
            case Warnings::None : cout<<"None"<<endl;
            break;
        }
    }

    void Cargo::setCargoType(cargoType _type)
    {
        eCargoType = _type;
    }
    void Cargo::setWarnings(Warnings _special)
    {
        special = _special;
    }
