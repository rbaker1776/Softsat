// leak.cpp
#include <iostream>

int main()
{
    while (true)
    {
        // alloc'ed but never freed
        int* ptr = new int[1000000];
    }
    return 0;
}
