// iostreamio.cpp
#include <iostream>

int main()
{
    int number;                             // declare an integer variable
    std::cout << "Enter a number: ";        // print a message
    std::cin >> number;                     // accept a number as input
    std::cout << "You entered: " << number; // print the number
    std::cout << std::endl;                 // print a newline
    return 0;
}
