#include "nString.h"
#include <cstring>

nString::nString(const char* newData)
: data(nullptr)
{
    SetData(newData);
}

nString::nString()
: data(nullptr)
{
    SetData("");
}

nString::nString(const nString& other)
: data(nullptr)
{
    SetData(other.data);
}

nString::~nString()
{
    delete[] data;
}

nString& nString::operator = (const nString& rhs)
{
    if (this != &rhs)
    {
        SetData(rhs.data);
    }
    return *this;
}

const char* nString::GetData() const
{
    return data;
}
size_t nString::GetLength() const
{
    return length;
}

void nString::SetData(const char* newData)
{
    delete[] data;

    if (newData != nullptr)
    {
        int len = strlen(newData);
        if (len > 0)
        {
            length = len;
            data = new char[length + 1];
            strcpy(data, newData);
            return;
        }
    }

    data = new char[1];
    data[0] = '\0';
    length = 0;
}
