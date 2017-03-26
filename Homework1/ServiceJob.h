#pragma once
#include <iostream>
#include <cstring>

using namespace std;

enum RepairType
{
    NaN,
    Maintenance,
    Engine,
    Suspension
};

class ServiceJob
{
private:
    double time;
    RepairType type;
public:
    ServiceJob();
    ServiceJob(double time,RepairType type);

	double GetServiceJobPrice(const ServiceJob&);

	double getTime() const;
	double getType() const;

	void setTime(int time);
	void setType(RepairType type);
};
