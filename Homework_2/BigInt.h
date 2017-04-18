#ifndef BIGINT_H
#define BIGINT_H
#include "String.h"

using namespace std;

class BigInt
{
    public:
        BigInt();
        BigInt(char s, String n);
        BigInt(const BigInt& other);

        void setNumber(String n);
        const String& getNumber();
        void setSign(char s);
        const char& getSign();

        BigInt& operator=(const BigInt&);
        const BigInt operator+(const BigInt& rhs);
        BigInt& operator+=(const BigInt& rhs);
        const BigInt operator-(const BigInt& rhs);
        BigInt& operator-=(const BigInt& rhs);
        BigInt& operator ++();
        BigInt operator ++(int);
        BigInt& operator --();
        BigInt operator --(int);
        bool operator==(const BigInt& rhs);
        bool operator!=(const BigInt& rhs);

        friend std::ostream& operator<<(std::ostream& os, const BigInt& rhs);
        friend std::istream& operator>>(std::istream& is, BigInt& rhs);

    private:
        char sign;
        String number;
};

#endif // BIGINT_H
