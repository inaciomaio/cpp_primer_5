// context: just write the program from pg16 and familiarize myself with the errors the compiler throws at me

//eg1
// mising include iostream
int main ( { //error no closing parentheses

    std::cout << "Read each file." << std::endl: //using colon isntead of semicolon
    std::cout << Update master. << std::endl; //missing quotes
    std::cout << "Write new master." std::endl; //missing operator '<<'

    return 0 //missing semicolon
}

//eg2
#include <iostream>
int main() {
    int v1 = 0, v2 = 0;
    std::cin >> v >> v2; // error, v is not declared (it's v1)
    cout << v1 + v2 << std::endl; // error cout not defined, missing std
    return 0;
}