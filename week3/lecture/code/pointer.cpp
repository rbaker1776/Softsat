// pointer.cpp
#include <iostream>

int main()
{
    int x = 42;
    int* ptr = &x;

    std::cout << x << std::endl;
    std::cout << *ptr << std::endl;
    std::cout << &ptr << std::endl;
    std::cout << ptr << std::endl;

    return 0;
}
