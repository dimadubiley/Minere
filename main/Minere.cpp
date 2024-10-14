#include "Minere.h"

#include<iostream>
using namespace std;

MyString::MyString()
{
    length = 80;
    str = new char[length];
    objectCount++;
}

MyString::MyString(const char* obj)
{
    length = strlen(obj);
    str = new char[length + 1];
    strcpy_s(str, length + 1, obj);
    objectCount++;
}

MyString::MyString(const MyString& obj)
{
    length = obj.length;
    str = new char[length + 1];
    strcpy_s(str, length + 1, obj.str);
    objectCount++;
}

MyString::~MyString()
{
    delete[] str;
    objectCount--;
}

void MyString::Print() const
{
    cout << str << endl;
}
void MyString::ShowObjectCount()
{
    cout << "Number of objects created: " << objectCount << endl;
}