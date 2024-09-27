//* Visibility of function prototypes and declarations part-3

/** A common approach for organizing large projects is to use header files.
 * In this example, the prototype declarations are placed in the header file (check test3 and foo.h in this folder).
**/


#include "foo.h"   //* foo's prototype declaration is stored in foo.h
#include <iostream>
using namespace std;

int main() {

    foo(2); // foo is called here. It works because its prototype was declared in the header file.
            // The function definition and declaration are linked during compilation.
}


void foo(int x) {  // foo's actual definition
    cout << "Done, Uisng HEADER file (foo.h)\n";
}