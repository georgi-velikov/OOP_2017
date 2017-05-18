#ifndef STRING_H
#define STRING_H

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
    int GetLength() const;

    // Setters
    void SetData(const char*);
private:
    char* data;
    int length;
};
#endif
