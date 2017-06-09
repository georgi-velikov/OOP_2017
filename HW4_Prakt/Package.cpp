#include "Package.h"
#include "Delivery.h"


    Package::Package(char* newSender,char* newSenderAdress,
            char* newSenderPhone,char* newReceiver,
            char* newReceiverAdress,char* newReceiverPhone,TypeDelivery _eType,
            double newWeight,double newValue,double newDimensions[3]):Delivery(newSender,newSenderAdress,
            newSenderPhone,newReceiver,
            newReceiverAdress, newReceiverPhone,_eType)
            {
                if (newWeight<500) weight = 500;
                else weight = newWeight;
                value = newValue;
                for(int i =0;i<2;i++)
                {
                    if(newDimensions[i]<40) dimension[i] = 40;
                    else dimension[i]=newDimensions[i];
                }
                if(newDimensions[2]<20) dimension[2] = 20;
                else dimension[2] = newDimensions[2];
            }

    //Getters
    const double Package::getWeight() const
    {
        return weight;
    }
    const double Package::getValue() const
    {
        return value;
    }
    void Package::getDimensions() const
    {
        cout<<"Length : "<<dimension[0];
        cout<<"Width : "<<dimension[1];
        cout<<"Height : "<<dimension[2];
    }

    //Setters
    void Package::setWeight(double _weight)
    {
       if(_weight >=500) weight = _weight;
       else weight = 500;
    }
    void Package::setValue(double _value)
    {
        value = _value;
    }
    void Package::setDimensions(double _dimensions[3])
    {
       for(int i =0 ; i<2 ; i++)
        {
            if(_dimensions[i]<40) dimension[i] = 40;
            else dimension[i]=_dimensions[i];
        }
        if(_dimensions[2]<20) dimension[2] = 20;
        else dimension[2] = _dimensions[2];
    }

    void Package::printInfo()
    {
        cout<<"Type of delivery : Package"<<endl;
        cout<<"Weight : "<<weight;
        cout<<"Value : "<<value;
        cout<<"Dimensions : "<<dimension[0]<<"x"<<dimension[1]<<"x"<<dimension[2]<<endl;
    }

    double Package::calculatePrice()
    {
        if(dimension[0]<40||dimension[1]<40||dimension[2]<20||weight<500) cout<<"Warning : one of the details of the package is lower than the minimum. Setting to minimum value!"<<endl;
        double price = (dimension[0]*dimension[1]*dimension[2])/6000 + weight/500 + value/100;
        switch (getDeliveryTypeEnum())
        {
            case TypeDelivery::Default : return price * 1;
            break;
            case TypeDelivery::Fast : return price * 1.1;
            break;
            case TypeDelivery::Express : return price * 1.2;
            break;
        }
    }

