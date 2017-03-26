#include "String.h"

String::String(const char* Str, const int Size)
{
    this-> Str= new char[strlen(Str)+1];
    strcpy(this-> Str,Str);
    this -> Size = Size;

}
String::String()
{
    this -> Str = NULL;
    this -> Size = 0;
}
void String::destroy()
{
    delete[] this -> Str;
    this->Size = 0;
}

String::~String()
{
    destroy();
}

void String::setStr(const char* newStr)
{
  delete[]Str;
  if(newStr)
  {
      size_t len=strlen(newStr);
      if(len!=0)
      {
          Str = new char[len+1];
          strcpy(Str,newStr);
      }
      else
      {
          Str = new char[1];
          Str[0] ='\0';
      }
  }
  else
  {
      Str = new char[1];
      Str[0] ='\0';
  }
}

void String :: setSize(int newSize)
{
    this->Size = newSize;

}

char* String::getStr()
{
    return this-> Str;
}

int String:: getSize()
{
    return Size;
}
