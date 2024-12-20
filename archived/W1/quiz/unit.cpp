#include <vector>
#include <chrono>
#include "regex.hpp"

#define STATUS 2

#ifdef DEBUG
    constexpr int MAX_ITER = 1000;
#endif

#if (STATUS == 2)
    constexpr int FORCEINLINE = 1;
#endif

int main()
{
    // do something
    return 0;
}
