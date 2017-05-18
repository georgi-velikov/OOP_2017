#include "Info.h"

Info::Info()
{
    setName('\0');
    setEGN(nullptr,0);
    setNomer('\0');
    setRegDate('\0');
    setColor('\0');
}
Info::Info(String _Name,int* _EGN,String _Nomer,String _RegDate,String _Color)
{
    setName(_Name);
    setEGN(_EGN,10);
    setNomer(_Nomer);
    setRegDate(_RegDate);
    setColor(_Color);
}
Info::Info(const Info& other)
{
    setName(other.Name);
    setEGN(other.EGN,10);
    setNomer(other.Nomer);
    setRegDate(other.RegDate);
    setColor(other.Color);
}
Info& Info::operator=(const Info& rhs)
{
    if (this == &rhs) return *this;
    setName(rhs.Name);
    setEGN(rhs.EGN,10);
    setNomer(rhs.Nomer);
    setRegDate(rhs.RegDate);
    setColor(rhs.Color);
    return *this;
}
String Info::getName() const
{
    return Name;
}
int*   Info::getEGN()
{
    return EGN;
}
String Info::getNomer() const
{
    return Nomer;
}
String Info::getRegDate() const
{
    return RegDate;
}
String Info::getColor() const
{
    return Color;
}
void Info::setName(String _Name)
{
    Name = _Name;
}
void Info::setEGN(const int* _EGN,int Size)
{
        for(int i = 0 ;i<Size;i++)
        {
            EGN[i] = _EGN[i];
        }
}
void Info::setNomer(String _Nomer)
{
    Nomer = _Nomer;
}
void Info::setRegDate(String _RegDate)
{
    RegDate = _RegDate;
}
void Info::setColor(String _Color)
{
    Color = _Color;
}
double Info::CalculateGO( double coefByRegion)
{
    int age = 117 - (EGN[0]*10 + EGN[1]);
	int taxByAge;
	if (age < 30)
	{
		taxByAge = 40;
	}
	else if (age < 40)
	{
		taxByAge = 30;
	}
	else
	{
		taxByAge = 20;
	}
	return (50 + taxByAge) * coefByRegion;
}
