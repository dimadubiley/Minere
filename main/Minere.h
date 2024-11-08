#pragma once


class Minere {
    char* str;
    int length;

    static int objectCount;

public:
    Minere();
    Minere(int size);
    Minere(const char* obj);
    Minere(const Minere& obj);
    ~Minere();

    void Input();
    void Print() const;
    void MyStrcpy(Minere& obj);
    bool MyStrStr(const char* substr);
    int MyChr(char c);
    int MyStrLen();
    void MyStrCat(Minere& b);
    void MyDelChr(char c);
    int MyStrCmp(Minere& b);
    static void ShowObjectCount();

    char& operator[](int index);
};

