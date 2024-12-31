// access.cpp
#include <iostream>

int main()
{
    int arr[5] = { 0, 1, 2, 3, 4 };

    std::cout << arr[1] << std::endl;
    std::cout << *(arr + 1) << std::endl;
    std::cout << *(1 + arr) << std::endl;
    std::cout << 1[arr] << std::endl;

    return 0;
}
