#include <iostream>

int main () {
    std::cout << "Enter two numbers:" << std::endl;
    int a, b;
    std::cin >> a >> b;
    std::cout << "The multiplication of ";
    std::cout << a;
    std::cout << " and ";
    std::cout << b;
    std::cout << " is ";
    std::cout << a*b;
    return 0;
}