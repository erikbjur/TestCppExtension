#include <iostream>
#include "MathLib/Library.h"

int main() {
    std::cout << "Hello World" << std::endl;
    int a = 5;
    int b = 6;
    int result = MathLib::Add(a, b);
    std::cout << "5 + 6 = " << result << std::endl;
}