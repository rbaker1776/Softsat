// dowhile.cpp
#include <iostream>

int main()
{
    int x = 0;
    do // do-while loops run before checking the condition
    {
        std::cout << x << std::endl;
    } while (x != 0);
    return 0;
}
