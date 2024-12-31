// ptop.cpp
#include <iostream>

int main()
{
    int x = -29;
    int* ax = &x; // address of x
    int** aax = &ax; // address of address of x
    int*** aaax = &aax; // address of address of ...

    std::cout << x << std::endl;
    std::cout << *ax << std::endl;
    std::cout << **aax << std::endl;
    std::cout << ***aaax << std::endl;

    return 0;
}
