#include<iostream>

int main() {
    // e1.9 with for loop
    int sum = 0;
    for(int count = 50; count <= 100; count++) {
        sum += count;
        std::cout << "Sum of 50 to 100 include is "
                  << sum << std::endl;
    }

    // e1.10 with for loop
    for(int n = 10; n >= 0; n--) {
        std::cout << n << std::endl;
    }

    // e1.11 with for loop
    int a, b;
    std::cout << "Pick 2 numbers (enter lower number first):" << std::endl;
    std::cin >> a >> b;

    for(a; a <= b; a++) {
        std::cout << a << std::endl;
    }

    return 0;
}