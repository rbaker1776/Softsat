// boolean.cpp
#include <iostream>

int main()
{
    std::cout << (1 == 1)    << std::endl; //  true or 1
    std::cout << (4 == 3)    << std::endl; // false or 0
    std::cout << bool(-7)    << std::endl; //  true or 1
    std::cout << (!(1 == 1)) << std::endl; // false or 0
    std::cout << (-1 < 1)    << std::endl; //  true or 1
    std::cout << (!(!(true))) << std::endl; // true or 1

    return 0;
}
