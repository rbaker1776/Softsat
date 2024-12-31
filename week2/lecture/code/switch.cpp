// switch.cpp
#include <iostream>

int main()
{
    int today = 5;
    switch (today)
    {
        case 0:
            std::cout << "Monday" << std::endl; break;
        case 1:
            std::cout << "Tuesday" << std::endl; break;
        case 2:
            std::cout << "Wednesday" << std::endl; break;
        case 3:
            std::cout << "Thursday" << std::endl; break;
        case 4:
            std::cout << "Friday" << std::endl; break;
        case 5:
            std::cout << "Saturday" << std::endl; break;
        case 6:
            std::cout << "Sunday" << std::endl; break;
        default: 
            std::cout << "Invalid day." << std::endl;
    }
    return 0;
}
