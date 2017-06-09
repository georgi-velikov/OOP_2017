#include "Delivery.h"

class Package : public Delivery
{

private :
    double weight;
    double value;
    double dimension[3];

public:

    Package(char* newSender,char* newSenderAdress,
            char* newSenderPhone,char* newReceiver,
            char* newReceiverAdress,char* newReceiverPhone,TypeDelivery _eType,
            double newWeight,double newValue,double newDimensions[3]);

    //Getters
    const double getWeight() const;
    const double getValue() const;
    void getDimensions() const;

    //Setters
    void setWeight(double _weight);
    void setValue(double _value);
    void setDimensions(double _dimensions[3]);


    void printInfo();

    double calculatePrice();


};
