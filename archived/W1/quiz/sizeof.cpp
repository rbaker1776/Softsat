#include <iostream>
#include <cstdint>

int main()
{
    std::cout << sizeof(uint8_t)  << ", " 
              << sizeof(uint16_t) << ", "
              << sizeof(int32_t)  << ", " 
              << sizeof(int64_t)  << std::endl;
    return 0;
}
