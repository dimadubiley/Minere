#pragma once


class MyString
{
    char* str;
    int length;

    static int objectCount;

public:
    MyString();
    MyString(const char* obj);
    MyString(const MyString& obj);
    ~MyString();
    void Print() const;
    static void ShowObjectCount();

};

