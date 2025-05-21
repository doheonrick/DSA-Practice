#include <stdexcept>
#include <iostream>

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

int main()
{
    std::cout << "Enter two numbers separated by space: ";
    
    int a, b;
    std::cin >> a >> b;

    std::cout << "Sum: " << add(a, b) << "\n";
    std::cout << "Subtract: " << subtract(a, b) << "\n";
    std::cout << "Multipy: " << multiply(a, b) << "\n";
    std::cout << "Divide: " << divide(a, b) << "\n";

    return 0;
}


