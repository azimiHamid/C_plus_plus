// Homework #3: Logical & Relational Operators HW

#include <iostream>
using namespace std;

int main() {

    int cups;
    cout << "Enter the number of cups you purchased? ";
    cin >> cups;

    int years;
    cout << "Enter the number of years you are a member? ";
    cin >> years;

    if (cups > 12 || years >= 1) {
        cout << "You're eligible for our discount.\n";
    } else {
        cout << "You're NOT eligible for a discount.\n";
    }

    return 0;
}
