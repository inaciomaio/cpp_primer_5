// exercise context: indicate which of the following outputs is legal

#include <iostream>

int main() {

    std::cout << "/*"; // legal
    std::cout << "*/"; // legal
    // std::cout << /* "*/" */; // illegal
    std::cout << /* "*/" /* "/*" */; // legal

    return 0;
}