#ifndef TRAILER_H
#define TRAILER_H
#include <iostream>
#include "String.h"
#include "Info.h"


class Treiler : public Info{
    public:
    Treiler();
    Treiler(String _Name,int* EGN,String _Nomer,String _RegDate,String _Color,
            int _Axles , int _Mass);
    Treiler(const Treiler& other);
    Treiler& operator=(const Treiler& rhs);
    ~Treiler();

    const int getAxles();
    const int getMass();


    void setAxles(int _Axles);
    void setMass(int _Mass);


    private:
    int Axles ; //
    int Mass;
};
#endif // TRAILER_H
