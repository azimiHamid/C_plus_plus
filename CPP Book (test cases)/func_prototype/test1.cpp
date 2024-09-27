//* Visibility of function prototypes and declarations part-1

#include <iostream>
using namespace std;


int main() {
    foo(2); // error: foo is called, but has not yet been declared
}

void foo(int x) { } // this later definition is not known in main