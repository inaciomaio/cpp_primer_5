// exercise context
// explain whether the following program fragment is legal

// std::cout << "The sum of " << v1;
// << " and " << v2;
// " is " << v1 + v2 << std::endl;

// I'm going to assume that both v1 and v2 have been declared as an int and this block is inside the int main() block and #include <iostream> is declared

#include <iostream>
// I believe that the program is not legal, for it to be legal it would either require std::cout in front of everyline + << operator on the last one like so:
int example1 () {
    int v1 = 7, v2 = 3;
    std::cout << "The sum of " << v1;
    std::cout << " and " << v2;
    std::cout <<" is " << v1 + v2 << std::endl;
    return 0;
}

// Or all the lines without semicolons besides the very last one and once again the << operator on the last one like so:
int example2 () {
    int v1 = 5, v2 = 5;
    std::cout << "The sum of " << v1
    << " and " << v2
    << " is " << v1 + v2 << std::endl;
    return 0;
}

int main() {
    example2();
    return 0;
}