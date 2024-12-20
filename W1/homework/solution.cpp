#include <iostream>
#include <cstdlib>
#include <assert.h>


int main(int argc, char* argv[])
{
    assert(argc == 3); // program name, plus two numbers

    const int a = std::atoi(argv[1]);
    const int b = std::atoi(argv[2]);
    std::cout << (a + b) << std::endl;

    return 0;
}
