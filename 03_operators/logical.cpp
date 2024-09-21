// Logical Operators: &&  ||  !

#include <iostream>
using namespace std;

bool isValid(int val) {
    return (val == 0 || val == 1);
}

int main() {

    int cups;
    int isStudent;

    cout << "Are you a student? (1 for YES, 0 for NO): ";
    cin >> isStudent;

    if (isValid(isStudent)) {

        cout << "Enter the number of cups: ";
        cin >> cups;

        if (isStudent || cups > 15) {
            cout << "You're eligible for a discount.\n";
        } else {
            cout << "You're NOT eligible for any discount.\n";
        }

    } else {

        cout << "Invalid Input!\n";
        return 0;

    }

    return 0;
}