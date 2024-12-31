// return.cpp
#include <iostream>

void foo(int x)
{
    if (x > 10)
        return; // return early
    std::cout << x << std::endl;
    // implicit return statement
}

int bar(int x)
{
    if (x > 10)
        return 0; // return early
    return x;
}

int main()
{
    return 0; // return 0 signifies all went well
}
