#include <iostream>
using namespace std;

int main() {
    // Declaring an array of 7 integers
    int myArray[7] = {10, 20, 30, 40, 50, 60, 70};

    // Accessing array's elements using index
    myArray[0] = 100;

    // Printing the array elements
    for(int i = 0; i < 7; i++) {
        cout << "Element " << i+1 << ": " << myArray[i] * 2 << endl;
    }

    return 0;
}
