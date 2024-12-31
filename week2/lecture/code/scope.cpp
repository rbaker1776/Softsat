// scope.cpp
#include <iostream>

int global_int = 10;
bool global_bool = 3;

int foo()
{
    int foo_int = 4;
    return foo_int;
}

int main()
{
    {
        // this is a narrower scope
        int narrow_int = 3;
    }
    // can no longer see "narrow_int"

    int local_int = 5;
    std::cout << local_int << std::endl;

    return 0;
}
