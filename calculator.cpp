#include <iostream>

// 덧셈 함수
int add(int a, int b)
{
    return a + b;
}

int main()
{
    int x, y;
    std::cout << "Write two numbers: ";
    std::cin  >> x >> y;
    std::cout << "Sum: " << add(x, y) << "\n";
    return 0;
}
