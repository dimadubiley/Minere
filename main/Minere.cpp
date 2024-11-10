#include "Minere.h"
#include <iostream>
#include <cstring>
#include "Minere.h"

using namespace std;

int Minere::objectCount = 0;

Minere::Minere(int size) : length(size)
{
    str = new char[length + 1];
    strcpy_s(str, length + 1, "");
    objectCount++;
}

Minere::Minere() : length(80)
{
    str = new char[length];
    objectCount++;
}

Minere::Minere(const char* obj)
{
    length = strlen(obj);
    str = new char[length + 1];
    strcpy_s(str, length + 1, obj);
    objectCount++;
}

Minere::Minere(const Minere& obj) : length(obj.length)
{
    str = new char[length + 1];
    strcpy_s(str, length + 1, obj.str);
    objectCount++;
}

Minere::~Minere()
{
    delete[] str;
    objectCount--;
}

void Minere::Input()
{
    cout << "Enter a string: ";
    cin.getline(str, length);
}

void Minere::Print() const
{
    cout << str << endl;
}

void Minere::MyStrcpy(Minere& obj)
{
    delete[] str;
    length = obj.length;
    str = new char[length + 1];
    strcpy_s(str, length + 1, obj.str);
}

bool Minere::MyStrStr(const char* substr)
{
    return strstr(str, substr) != nullptr;
}

int Minere::MyChr(char c)
{
    for (int i = 0; i < length; ++i)
    {
        if (str[i] == c)
        {
            return i;
        }
    }
    return -1;
}

int Minere::MyStrLen()
{
    return length;
}

void Minere::MyStrCat(Minere& b)
{
    char* newStr = new char[length + b.length + 1];
    strcpy_s(newStr, length + 1, str);
    strcat_s(newStr, length + b.length + 1, b.str);
    delete[] str;
    str = newStr;
    length += b.length;
}

void Minere::MyDelChr(char c)
{
    int newLength = 0;
    for (int i = 0; i < length; ++i)
    {
        if (str[i] != c)
        {
            str[newLength++] = str[i];
        }
    }
    str[newLength] = '\0';
    length = newLength;
}

int Minere::MyStrCmp(Minere& b)
{
    int comparison = strcmp(str, b.str);
    if (comparison < 0) return -1;
    if (comparison > 0) return 1;
    return 0;
}

void Minere::ShowObjectCount()
{
    cout << "Number of objects created: " << objectCount << endl;
}

char& Minere::operator[](int index)
{
    if (index < 0 || index >= length)
    {
        cerr << "Index out of range\n";
        exit(1);
    }
    return str[index];
}

ostream& operator<<(ostream& os, const Minere& obj)
{
    os << obj.str;
    return os;
}

istream& operator>>(istream& is, Minere& obj)
{
    char buffer[256];
    is.getline(buffer, 256);

    delete[] obj.str;
    obj.length = strlen(buffer);
    obj.str = new char[obj.length + 1];
    strcpy_s(obj.str, obj.length + 1, buffer);

    return is;
}
