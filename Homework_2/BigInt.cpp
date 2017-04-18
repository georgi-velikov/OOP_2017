#include "BigInt.h"

BigInt::BigInt()
{
	sign = ' ';
    number = "0";
}
BigInt::BigInt(char s, String n)
{
	setSign(s);
    setNumber(n);
}

BigInt::BigInt(const BigInt& other)
{
    setSign(other.sign);
    setNumber(other.number);
}

void BigInt::setNumber(String n)
{
	number = n;
}

const String& BigInt::getNumber()
{
	return number;
}

void BigInt::setSign(char s)
{
	sign = s;
}

const char& BigInt::getSign()
{
	return sign;
}
BigInt& BigInt::operator=(const Player& rhs)
{
if (this == &rhs)
    {
    setSign(rhs.sign);
    setNumber(rhs.number);
    }
    return *this;
}
BigInt& BigInt:: operator+=(const BigInt& rhs)
{
	number += rhs.number;
	return*this;
}

const BigInt BigInt::operator+(const BigInt& rhs)
{
	return BigInt(*this) += rhs;
}

BigInt& BigInt::operator-=(const BigInt& rhs)
{
	number -= rhs.number;
	return *this;
}
const BigInt BigInt::operator-(const BigInt& rhs)
{
	return BigInt(*this) -= rhs;
}

BigInt& BigInt::operator ++()
{
    (*this) = (*this) + 1;
	return (*this);
}
BigInt  BigInt::operator ++(int)
{
    BigInt result = *this;
    (*this) = (*this) + 1;
    return result;
}
BigInt& BigInt::operator --()
{
    (*this) = (*this) - 1;
	return (*this);
}
BigInt BigInt::operator --(int)
{
    BigInt result = *this;
    (*this) = (*this) - 1;
    return result;
}
bool BigInt::operator==(const BigInt& rhs)
{
	return (*this==rhs);
}

bool BigInt::operator!=(const BigInt& rhs)
{
	return !(*this == rhs);
}

std::ostream& operator<<(ostream& os, const BigInt& rhs)
{
	if (number[0] == '-')
	{
		os << "-";
	}

	os << rhs;
	return os;
}

std::istream& operator>>(istream& is, BigInt& rhs)
{

}
