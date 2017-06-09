#ifndef STRING_H
#define STRING_H
#include <iostream>
using namespace std;
class nString
{
public:
    nString(const char*);
    nString();
    nString(const nString& owner);
    ~nString();
    nString& operator=(const nString&);

    // Getters
    const char* GetData() const;
    unsigned int GetLength() const;

    // Setters
    void SetData(const char*);

    friend ostream& operator<<(ostream& os, const nString& rhs)
    {
        os<<rhs.data;
        return os;
    }
    friend istream& operator>>(istream& is, nString& rhs)
    {
        is>>rhs.data;
        return is;
    }
private:
    char* data;
    unsigned int  length;
};

#endif // STRING_H
