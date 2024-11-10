#include <iostream>
#include "Minere.h"

using namespace std;

int main()
{
    Minere obj1("Hello");
    cout << "obj1: " << obj1 << std::endl;

    Minere obj2;
    cout << "Enter a string for obj2: ";
    cin >> obj2;
    cout << "obj2: " << obj2 << std::endl;

    Minere::ShowObjectCount();

}
