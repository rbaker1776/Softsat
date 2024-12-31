// continue.cpp
#include <iostream>

int main()
{
    int x = 0;
    for (; x < 10; ++x)
    {
        if (x % 2 == 0)
            continue; // use continue to only print odds
        std::cout << x << std::endl;
    }
    return 0;
}
