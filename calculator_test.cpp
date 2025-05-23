// calculator_test.cpp

#include <cassert>
#include <stdexcept>
#include "calculator.h"

// forward declarations of your arithmetic functions
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);


int main()
{
    // addition
    assert(add(2, 3) == 5);

    // subtraction
    assert(subtract(5, 2) == 3);

    // multiplication
    assert(multiply(4, 3) == 12);

    // division by zero → check exception
    try
    {
        divide(4, 0);
        assert(false);  // fail
    }

    catch (...)
    {
        // pass
    }

    // normal division
    assert(divide(9, 3) == 3);

    return 0;
}