#include <stdexcept>
#include "calculator.h"

    // Addition
    int add(int a, int b)
    {
        return a + b;
    }
    
    // Subtraction
    int subtract(int a, int b)   
    { 
        return a - b; 
    }
    
    // Multiplication
    int multiply(int a, int b)   
    { 
        return a * b; 
    }
    
    // Division
    int divide(int a, int b) 
    {
        if (b == 0) 
        {
            throw std::runtime_error("division by zero");
        }

        return a / b;
    }  




