// break.cpp
#include <iostream>

int main()
{
    for (int i = 0; i < 10; ++i)
    {
        if (i >= 5)
            break; // use "break" to exit loop early
        std::cout << i << std::endl;
    }

    return 0;
}
