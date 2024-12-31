// reference.cpp
#include <iostream>

int main()
{
    int x = 42;
    int& ref = x;

    ref *= 2;

    std::cout << x << std::endl;

    return 0;
}
