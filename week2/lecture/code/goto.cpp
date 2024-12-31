// goto.cpp
#include <iostream>

int main()
{
    int x = 10;
Label:
    if (x > 5)
    {
        std::cout << (x--) << std::endl;
        goto Label;
    }
    return 0;
}
