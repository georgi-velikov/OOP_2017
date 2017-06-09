#include "Delivery.h"
#include <cstring>
#include <iostream>
#include "nString.h"

int Delivery::orderNumber = 0;
using namespace std;


    Delivery::Delivery():deliveryID(++orderNumber)
    {
        setSenderInfo("\0","\0","\0");
        setReceiverInfo("\0","\0","\0");
        setDeliveryType(TypeDelivery::Default);

    }

    Delivery::Delivery(char* newSender,char* newSenderAdress,
                       char* newSenderPhone,char* newReceiver,char* newReceiverAdress,
                       char* newReceiverPhone,TypeDelivery _eType):deliveryID(++orderNumber)
    {
        sender.name.SetData(newSender);
        sender.adress.SetData(newSenderAdress);
        sender.phoneNumber.SetData(newSenderPhone);
        receiver.name.SetData(newReceiver);
        receiver.adress.SetData(newReceiverAdress);
        receiver.phoneNumber.SetData(newReceiverPhone);
        eType = _eType;

    }
    Delivery& Delivery::operator=(const Delivery& rhs)
    {
        if(this!=&rhs)
        {
            sender = rhs.sender;
            receiver = rhs.receiver;
            eType = rhs.eType;
        }
    }

        //Getters
    const Person Delivery::getSender()
    {
        return sender;
    }
    const Person Delivery::getReceiver() const
    {
        return receiver;
    }
    void Delivery::getDeliveryType() const
    {
        cout<<"Type of delivery : ";
        switch (eType)
        {
            case TypeDelivery::Default : cout<<"Default"<<endl;
            break;
            case TypeDelivery::Fast : cout<<"Fast"<<endl;
            break;
            case TypeDelivery::Express : cout<<"Express"<<endl;
            break;
        }
    }
    const int Delivery::getDeliveryID() const
    {
        return deliveryID;
    }

        //Setters
    void Delivery::setSenderInfo(const char* _name , const char* _adress , const char* _phoneNumber)
    {
        sender.name.SetData(_name);
        sender.adress.SetData(_adress);
        sender.phoneNumber.SetData(_phoneNumber);
    }
    void Delivery::setReceiverInfo(const char* _name , const char* _adress , const char* _phoneNumber)
    {
        receiver.name.SetData(_name);
        receiver.adress.SetData(_adress);
        receiver.phoneNumber.SetData(_phoneNumber);
    }
    void Delivery::setDeliveryType(TypeDelivery _eType)
    {
        eType = _eType;
    }


    void Delivery::printInfo()
    {
        cout<<"Sender info : "<<sender.name.GetData()<<" , "<<sender.adress.GetData()<<" , "<<sender.phoneNumber.GetData()<<endl;
        cout<<"Receiver info : "<<receiver.name.GetData()<<" , "<<receiver.adress.GetData()<<" , "<<receiver.phoneNumber.GetData()<<endl;
        cout<<"Delivery type : ";
        switch (eType)
        {
            case TypeDelivery::Default : cout<<"Default"<<endl;
            break;
            case TypeDelivery::Fast : cout<<"Fast"<<endl;
            break;
            case TypeDelivery::Express : cout<<"Express"<<endl;
            break;
        }
        cout<<"Delivery ID : "<<deliveryID<<endl;
    }



    const TypeDelivery Delivery::getDeliveryTypeEnum() const
    {
        return eType;
    }
