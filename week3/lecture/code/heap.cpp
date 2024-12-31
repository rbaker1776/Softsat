// heap.cpp
#include <iostream>

int main()
{
    int* ptr = new int(42);
    std::cout << *ptr << std::endl;
    delete ptr;

    return 0;
}
