// Homework #4: Bitwise Operators HW

#include <iostream>
using namespace std;

int main() {

    int GREEN_TEA = 1;  // 0001
    int BLACK_TEA = 2;  // 0010
    int OOLONG_TEA = 4; // 0100

    int stock = BLACK_TEA; // we just have black tea in stock

    int userChoice;
    cout << "Enter a tea type: (1 for green, 2 for black and 4 for oolong tea) ";
    cin >> userChoice;

    if (stock & userChoice) { // 0010 & 0001 (green tea) == 0000 (false)
        cout << "Your selected Tea is in stock!" << endl;
    } else {
        cout << "Your selected Tea is NOT in stock!" << endl;
    }

    return 0;
}
