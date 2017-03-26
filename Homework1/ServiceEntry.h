#pragma once
#include <iostream>
#include <cstring>
#include "String.h"
#include "ServiceJob.h"

using namespace std;

enum Car {Subaru, Volkswagen, Renault, Nissan, BMW, None };
enum ClientType {Private, Firms, Preferential, Normal };

class ServiceEntry
{
private:
	String Name;
	int ID;
	Car CarBrand;
	String PlateNumber;
	ClientType Client;
	ServiceJob Repairs;

public:
	ServiceEntry();
	ServiceEntry(String newName, int newID, Car newCarBrand, ClientType newClient, ServiceJob newRepair);
    ~ServiceEntry();

    String getName() const;
	int getID() const;
	char* getCarBrand() const;
	char* getPlateNumber() const;
	char* getClient() const;
	char* getRepairs() const;

	void setName(String newName);
	void sedID(int newID);
	void setCarBrand(Car newCarBrand);
	void setPlateNumber(const char* newPlateNumber);
	void setClient(ClientType newClient);
	void setRepairs(ServiceJob newRepairs);

	double GetTotalPrice() ;

	void PrintInfo() ;
};

