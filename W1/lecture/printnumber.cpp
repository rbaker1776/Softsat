// printnumber.cpp

#include <iostream>
#include <cstdlib> // for atoi()

int main(int argc, char* argv[])
{
    int n = std::atoi(argv[1]);
    std::cout << n << std::endl;
    return 0;
}
