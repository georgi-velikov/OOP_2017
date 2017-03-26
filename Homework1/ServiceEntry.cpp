#include "ServiceEntry.h"

ServiceEntry::ServiceEntry()
{
	Name.setStr("/0");
	Name.setSize(0);

	ID = 0;

}

ServiceEntry::ServiceEntry(String newName, int newID, Car newCarBrand, ClientType newClient, ServiceJob newRepair)
{
	Name.setStr(newName.getStr());
	Name.setSize(newName.getSize());

	ID = newID;

	CarBrand = newCarBrand;

	Client = newClient;

	Repairs = newRepair;
}

char* PrintCarBrand(Car Brand)
{
	switch (Brand)
	{
	case 0: return "Subaru"; break;
	case 1: return "Volkswagen"; break;
	case 2: return "Renault"; break;
	case 3: return "Nissan"; break;
	case 4: return "BMW"; break;
	default: return "None"; break;
	}
}

char* PrintClient(ClientType client)
{
	switch (client)
	{
	case 0: return "Private"; break;
	case 1: return "Firms"; break;
	case 2: return "Preferential"; break;
	default: return "Normal"; break;
	}
}

double ServiceEntry::GetTotalPrice()
{

	return Repairs.GetServiceJobPrice(Repairs) / (double)Client;
}

void ServiceEntry::PrintInfo()
{
	cout << "Name: " << Name.getStr() << endl;
	cout << "Identificator: " << ID << endl;
	cout << "Plate number: " << PlateNumber.getStr() << endl;
	cout << "Car Brand: " << this->getCarBrand() << endl;
	cout << "Client Type: " << this->getClient() << endl;
	cout<< "Repairs: "<<endl;
	cout << "- " << Repairs.getType() <<": "<< Repairs.GetServiceJobPrice(Repairs) << endl;

}





String ServiceEntry::getName() const
{
	//return Name.getStr();
}

int ServiceEntry::getID() const
{
	return ID;
}

char* ServiceEntry::getCarBrand() const
{
	return PrintCarBrand(this->CarBrand);
}

char * ServiceEntry::getPlateNumber() const
{
//	return PlateNumber.getStr();
}

char* ServiceEntry::getClient() const
{
	return PrintClient(this->Client);
}

char * ServiceEntry::getRepairs() const
{
//	return Repairs.getRepairToChar();
}




void ServiceEntry::setName(String newName)
{
	Name.setStr(newName.getStr());
	Name.setSize(newName.getSize());
}

void ServiceEntry::sedID(int newID)
{
	ID = newID;
}

void ServiceEntry::setCarBrand(Car newCarBrand)
{
	CarBrand = newCarBrand;
}

void ServiceEntry::setPlateNumber(const char * newPlateNumber)
{
	PlateNumber.setStr(newPlateNumber);
	PlateNumber.setSize(strlen(newPlateNumber));
}

void ServiceEntry::setClient(ClientType newClient)
{
	Client = newClient;
}

void ServiceEntry::setRepairs(ServiceJob newRepairs)
{
	Repairs = newRepairs;
}
