// Logical Operators: &&  ||  !

#include <iostream>
using namespace std;

bool checkIsStudentValid(int val) {
    bool isInputValid = true;
    if (val != 0 && val != 1) {
        isInputValid = false;
    }

    return isInputValid;
}

int main() {

    int cups;
    int isStudentInput;

    cout << "Are you a student? (1 for YES, 0 for NO): ";
    cin >> isStudentInput;

    if (!checkIsStudentValid(isStudentInput)) {
        cout << "Invalid input!\n";
        return 0;
    }

    bool isStudent = bool(isStudentInput);

    cout << "Enter the number of cups: ";
    cin >> cups;

    if (isStudent || cups > 15) {
        cout << "You're eligible for a discount." << endl;
    } else {
        cout << "You're NOT eligible yet for any discount." << endl;
    }

    return 0;
}

