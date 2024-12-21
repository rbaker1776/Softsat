// conditional.cpp

int main()
{
    const int x = 5;

    bool a = x == 5;   // true
    bool b = x < 5;    // false
    bool c = (x == 6); // false
    bool d = bool(x);  // true
    bool e = true;     // true

    return 0;
}
