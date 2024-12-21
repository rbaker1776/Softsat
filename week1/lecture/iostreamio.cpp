// iostreamio.cpp
#include <iostream>

int main()
{
    int number; // decalre an integer variable called "number"

    std::cout << "Enter a number: "; // print a prompt message
    std::cin >> number; // accept a number as input

    std::cout << "You entered: " << number; // print the number
    std::cout << std::endl;                 // print a newline

    return 0;
}
