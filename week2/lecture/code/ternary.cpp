// ternary.cpp
#include <iostream>

int foo(int x)
{
    return (x > 5 ? 10 : 0); // standard use of ternary
}

int main()
{
    std::cout << foo(6) << std::endl; // 10
    std::cout << foo(1) << std::endl; // 0

    // non-standard use of ternary
    (2 > 3 ? std::cout << "true" : std::cout << "false");
    std::cout << std::endl;

    return 0;
}
