#include <iostream>

int main() {
    int a, b;
    std::cout << "Pick 2 numbers (enter lower number first):" << std::endl;
    std::cin >> a >> b;

    while(a <= b) {
        std::cout << a << std::endl;
        a++;
    }

    return 0;
}