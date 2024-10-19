#include <iostream>
#include <Windows.h>
#include "Minere.h"
using namespace std;

int Minere::objectCount = 0;

int main()
{
    Minere obj1("Hello");
    obj1.Print();
    Minere obj2(obj1);
    obj2.Print();

    Minere::ShowObjectCount();

}
