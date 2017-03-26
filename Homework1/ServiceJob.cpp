#include "ServiceJob.h"

ServiceJob::ServiceJob()
{
	time = 0;
	type = NaN;
}

ServiceJob::ServiceJob(double newTime, RepairType newType)
{
	time = newType;
	type = newType;
}

double ServiceJob::GetServiceJobPrice(const ServiceJob&)
{
    switch(type)
    {
    case 0:
        return 0;
        break;
    case 1:
        return 10 * time;
        break;
    case 2:
        return 50 * time;
        break;
    case 3:
        return 75 * time;
        break;
    default:
        return 0;
    }
}

double ServiceJob::getTime() const
{
	return time;
}

double ServiceJob::getType() const
{
	return (double)type;
}

void ServiceJob::setTime(int time)
{
	this->time = time;
}

void ServiceJob::setType(RepairType RepType)
{
	this->type = RepType;
}
