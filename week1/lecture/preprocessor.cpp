// preprocessor.cpp
#include <iostream> // pastes 'iostream' file

#define MAX 500 // replaces "MAX" with "500"

// conditional compilation with #if, #ifdef, #ifndef
#if (MAX > 1000) // evaluates to false
    #define STATUS 20 // does not compile
#else
    #define STATUS 10 // compiles
#endif

int main()
{
    std::cout << "Hello, World!" << std::endl;
    std::cout << MAX << std::endl;
    std::cout << STATUS << std::endl;
    return 0;
}
