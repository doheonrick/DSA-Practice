// calculator_test.cpp
#include <cassert>
// Can only declare function inside of calculator.cpp
int add(int a, int b);

int main()
{
    // Basic fuction test
    assert(add(2, 3) == 5);
    assert(add(0, 0) == 0);
    
    // If all tests pass, end without any message.
    return 0;
}
