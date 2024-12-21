// switch.cpp
#include <iostream>

int main()
{
    int day = 4;
    switch (day)
    {
        case 0:
            std::cout << 'M' << std::endl;
            break;
        case 1:
            std::cout << 'T' << std::endl;
            break;
        case 2:
            std::cout << 'W' << std::endl;
            break;
        case 3:
            std::cout << 'R' << std::endl;
            break;
        case 4:
            std::cout << 'F' << std::endl;
            break;
        case 5:
            std::cout << 'S' << std::endl;
            break;
        case 6:
            std::cout << 'U' << std::endl;
            break;
        default: 
            std::cout << "Invalid day." << std::endl;
            break;
    }
    return 0;
}
