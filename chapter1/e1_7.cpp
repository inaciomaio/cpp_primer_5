// exercise context: compile a program that has incorretly nested comments

#include <iostream>
/*
* comment pairs  /*   */ cannot nest.
* everything from here on out is no longer a comment
*/
int main() {
    return 0;
}

// error: 'cannot' does not name a type