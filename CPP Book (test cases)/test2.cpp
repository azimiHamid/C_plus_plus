/*
  * Functions Default Parameters
*/

/* 
* Preprocessor: always starts with # 
        like: #include <iostream>
              #define something something_else
              #define ZERO 0
*/

#define something something_else  // means everywhere the compiler see something it will replace it with something_else
#include <iostream>
using namespace std;

int sub(int a, int b);  // no default parameter here.

//* Default arguments must be placed in the latter arguments of the function.
int sum(int a = 10, int b);     //! NOT LEGAL, not placed in the latter args like b.
int multiply(int a, int b = 3); // LEGAL

int main() {

    #if something
        cout << "Hello Hamid\n";
    #else
        cout << "Good bye\n";
    #endif

    #ifdef something
        cout << "Something is Defined here\n";
    #endif

    return 0;
}
