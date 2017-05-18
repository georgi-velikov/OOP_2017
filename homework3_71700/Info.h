#ifndef INFO_H
#define INFO_H
#include "String.h"

class Info
{   public:
        Info();
        Info(String _Name,int* EGN,String _Nomer,String _RegDate,String _Color);
        Info(const Info& other);
        Info& operator=(const Info& other);

        String getName() const;
        int*   getEGN();
        String getNomer() const ;
        String getRegDate() const;
        String getColor() const ;

        void setName(String _Name);
        void setEGN(const int* _EGN,int Size);
        void setNomer(String _Nomer);
        void setRegDate(String _RegDate);
        void setColor(String _Color);

        double CalculateGO(double coefByRegion);

    private:
        String Name;
        int EGN[10]; // int[10]
        String Nomer;
        String RegDate;
        String Color;
        int Age;


};

#endif // INFO_H
