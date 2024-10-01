// Pass By value : Just a copy of argument will be passed.

#include <iostream>
using namespace std;

void pourChai(int cups) {
    cups += 5;
    cout << "Poured Cups: " << cups << endl;
}

int main() {

    int chaiCups = 2;
    pourChai(chaiCups);
    cout << "Initial chaiCups : " << chaiCups << endl; // pass by value

    return 0;
}

// output: 
//     Poured Cups: 7
//     Initial number of chaiCups : 7


/* 
Here's a story to illustrate pass by value and pass by reference:-

    Imagine I give you a code file. You download it and make some changes.
    However, the original code file remains unchanged. This is **pass by value**—
    you've modified your copy, but the original file stays the same.

    Now, if I give you access to the original file (like on GitHub) and you make changes, 
    those changes affect the main file. This is **pass by reference**—
    modifications are reflected in the original file. 
*/
