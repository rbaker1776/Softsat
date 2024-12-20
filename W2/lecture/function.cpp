// function.cpp

#include <iostream>

// type name(arguments) {...}

int add(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    int sum = add(4, 5, -1);
    std::cout << sum << std::endl;
    return 0;
}
