// if.cpp

#include <iostream>

// 'if' is used to execute a block of code if a condition evaluates to true
// 'else' is used to provide an alternative

int main()
{
    int x = 10;
    if (x > 5) // x > 5 == true
        std::cout << "x is greater than 5." << std::endl;
    else // never gets run
        std::cout << "x is 5 or less." << std::endl;
    return 0;
}
