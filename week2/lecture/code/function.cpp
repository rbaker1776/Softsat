// function.cpp
#include <iostream>

int add(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    std::cout << add(2, 4, 5) << std::endl;
    std::cout << add(5, 1, 0) << std::endl;
    std::cout << add(6, 0, 9) << std::endl;
    return 0;
}
