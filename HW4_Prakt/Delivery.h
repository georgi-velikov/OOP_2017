#pragma once
#include "nString.h"
#include <iostream>
#include <cstring>

using namespace std;


struct Person
{
    nString name;
    nString adress;
    nString phoneNumber;

    Person& operator=(const Person& rhs)
    {
        if(this!=&rhs)
        {
            name = rhs.name;
            adress=rhs.adress;
            phoneNumber = rhs.phoneNumber;
        }
        return *this;
    }

    friend ostream& operator<<(ostream& os, const Person& rhs)
    {
        os<<"Name : "<<rhs.name<<endl;
        os<<"Adress : "<<rhs.adress<<endl;
        os<<"Phone number : "<<rhs.phoneNumber<<endl;
        return os;
    }

};

enum class TypeDelivery
{
    Default,
    Fast,
    Express,
};

class Delivery
{

    private:

        const int deliveryID;
        Person sender;
        Person receiver;
        TypeDelivery eType;



    public:

        static int orderNumber;
        Delivery();
        Delivery(char* newSender,char* newSenderAdress,char* newSenderPhone,char* newReceiver,char* newReceiverAdress,char* newReceiverPhone,TypeDelivery _eType);
        Delivery& operator=(const Delivery& rhs);
        //Getters
        const Person getSender() ;
        const Person getReceiver() const;
        void getDeliveryType() const;
        const TypeDelivery getDeliveryTypeEnum() const;
        const int getDeliveryID() const;

        //Setters
        void setSenderInfo(const char* _name , const char* _adress , const char* _phoneNumber);
        void setReceiverInfo(const char* _name , const char* _adress , const char* _phoneNumber);
        void setDeliveryType(TypeDelivery eType);

        virtual void printInfo();

        virtual double calculatePrice()
        {
            return 0;
        }
};
