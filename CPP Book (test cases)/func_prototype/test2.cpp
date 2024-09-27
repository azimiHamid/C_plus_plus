//* Visibility of function prototypes and declarations part-1

#include <iostream>
using namespace std;


void foo(int); // Prototype declaration of foo, seen by main
               // Must specify return type, name, and argument list types



int main() {

    foo(2); // OK: foo is known, called even though its body is not yet defined

}


void foo(int x) {  // Must match the prototype
    cout << "Done, No Error\n";
}


/** One common way to integrate this into the organization of source files is 
 * to make a header file containing all of the
 * prototype declarations  ( check test3 in this folder ).
*/
