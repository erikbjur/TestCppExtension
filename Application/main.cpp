#include <iostream>
#include "MathLib/Library.h"

int main() {
    std::cout << "Here we are going to add two numbers 5 and 6 using a static library..." << std::endl;
    int a = 5;
    int b = 6;
    int result = MathLib::Add(a, b);
    std::cout << "5 + 6 = " << result << std::endl;
}