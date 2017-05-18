#include "Trailer.h"

Trailer::Trailer()
    :Info()
{
    setAxles(0);
    setMass(0);
}
Trailer::Trailer(String _Name,int* EGN,String _Nomer,String _RegDate,String _Color,
            int _Axles , int _Mass)
{
    setAxles(_Axles);
    setMass(_Mass);

}
Trailer::Trailer(const Trailer& other)
    :Info(other)
{
        setAxles(other.Axles);
        setMass(other.Mass);
}
Trailer& Trailer::operator=(const Trailer& rhs)
{
        if(this==&rhs)
            return *this;

    Info::operator=(rhs);
    setAxles(rhs.Axles);
    setMass(rhs.Mass);
    return *this;
}

const int Trailer::getAxles()
{
    return Axles;
}
const int Trailer::getMass()
{
    return Mass;
}


void Trailer::setAxles(int _Axles)
{
    Axles = _Axles;
}
void Trailer::setMass(int _Mass)
{
    Mass = _Mass;
}
