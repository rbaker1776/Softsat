// parithmetic.cpp
#include <iostream>

int main()
{
    int x = 10;
    int* a = &x; // address-of x
    int* b = a + 1; // increments by sizeof(int)
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    return 0;
}
